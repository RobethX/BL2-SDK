#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDelegateProperty(py::module &m)
{
    py::class_< UDelegateProperty,  UProperty   >(m, "UDelegateProperty")
		.def_static("StaticClass", &UDelegateProperty::StaticClass, py::return_value_policy::reference)
          ;
}