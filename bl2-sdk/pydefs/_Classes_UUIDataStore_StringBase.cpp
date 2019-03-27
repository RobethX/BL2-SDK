#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_StringBase(py::module &m)
{
    py::class_< UUIDataStore_StringBase,  UUIDataStore   >(m, "UUIDataStore_StringBase")
		.def_static("StaticClass", &UUIDataStore_StringBase::StaticClass, py::return_value_policy::reference)
          ;
}