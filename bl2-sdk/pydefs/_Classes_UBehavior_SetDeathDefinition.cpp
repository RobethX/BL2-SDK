#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetDeathDefinition(py::module &m)
{
    py::class_< UBehavior_SetDeathDefinition,  UBehaviorBase   >(m, "UBehavior_SetDeathDefinition")
		.def_static("StaticClass", &UBehavior_SetDeathDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NewDeathDefinition", &UBehavior_SetDeathDefinition::NewDeathDefinition)
        .def("ApplyBehaviorToContext", &UBehavior_SetDeathDefinition::ApplyBehaviorToContext)
          ;
}