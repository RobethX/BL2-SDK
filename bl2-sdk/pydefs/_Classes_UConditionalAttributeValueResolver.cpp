#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UConditionalAttributeValueResolver(py::module &m)
{
    py::class_< UConditionalAttributeValueResolver,  UAttributeValueResolver   >(m, "UConditionalAttributeValueResolver")
		.def_static("StaticClass", &UConditionalAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ValueExpressions", &UConditionalAttributeValueResolver::ValueExpressions)
          ;
}