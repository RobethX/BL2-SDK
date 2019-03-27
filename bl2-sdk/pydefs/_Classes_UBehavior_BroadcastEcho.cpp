#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_BroadcastEcho(py::module &m)
{
    py::class_< UBehavior_BroadcastEcho,  UBehaviorBase   >(m, "UBehavior_BroadcastEcho")
		.def_static("StaticClass", &UBehavior_BroadcastEcho::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_BroadcastEcho::ApplyBehaviorToContext)
          ;
}