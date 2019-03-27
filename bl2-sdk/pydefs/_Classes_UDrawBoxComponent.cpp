#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawBoxComponent(py::module &m)
{
    py::class_< UDrawBoxComponent,  UPrimitiveComponent   >(m, "UDrawBoxComponent")
		.def_static("StaticClass", &UDrawBoxComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BoxColor", &UDrawBoxComponent::BoxColor)
        .def_readwrite("BoxMaterial", &UDrawBoxComponent::BoxMaterial)
        .def_readwrite("BoxExtent", &UDrawBoxComponent::BoxExtent)
          ;
}