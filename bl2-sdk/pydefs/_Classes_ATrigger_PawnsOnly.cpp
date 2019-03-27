#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATrigger_PawnsOnly(py::module &m)
{
    py::class_< ATrigger_PawnsOnly,  ATrigger   >(m, "ATrigger_PawnsOnly")
		.def_static("StaticClass", &ATrigger_PawnsOnly::StaticClass, py::return_value_policy::reference)
          ;
}