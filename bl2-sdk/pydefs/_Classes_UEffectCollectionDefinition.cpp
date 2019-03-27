#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEffectCollectionDefinition(py::module &m)
{
    py::class_< UEffectCollectionDefinition,  UGBXDefinition   >(m, "UEffectCollectionDefinition")
		.def_static("StaticClass", &UEffectCollectionDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ParticleEffects", &UEffectCollectionDefinition::ParticleEffects)
        .def("GetParticleEffect", &UEffectCollectionDefinition::GetParticleEffect, py::return_value_policy::reference)
          ;
}