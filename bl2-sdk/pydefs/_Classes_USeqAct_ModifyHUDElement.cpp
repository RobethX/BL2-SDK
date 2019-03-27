#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ModifyHUDElement(py::module &m)
{
    py::class_< USeqAct_ModifyHUDElement,  USequenceAction   >(m, "USeqAct_ModifyHUDElement")
		.def_static("StaticClass", &USeqAct_ModifyHUDElement::StaticClass, py::return_value_policy::reference)
        .def_readwrite("HUDElement", &USeqAct_ModifyHUDElement::HUDElement)
        .def_readwrite("ResPoolDefinition", &USeqAct_ModifyHUDElement::ResPoolDefinition)
          ;
}