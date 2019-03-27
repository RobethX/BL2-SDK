#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInteractiveFoliageComponent(py::module &m)
{
    py::class_< UInteractiveFoliageComponent,  UStaticMeshComponent   >(m, "UInteractiveFoliageComponent")
		.def_static("StaticClass", &UInteractiveFoliageComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FoliageSceneProxy", &UInteractiveFoliageComponent::FoliageSceneProxy)
          ;
}