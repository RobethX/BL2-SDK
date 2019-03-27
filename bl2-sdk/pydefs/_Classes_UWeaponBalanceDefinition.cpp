#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponBalanceDefinition(py::module &m)
{
    py::class_< UWeaponBalanceDefinition,  UInventoryBalanceDefinition   >(m, "UWeaponBalanceDefinition")
		.def_static("StaticClass", &UWeaponBalanceDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("WeaponPartListCollection", &UWeaponBalanceDefinition::WeaponPartListCollection)
        .def_readwrite("RuntimePartListCollection", &UWeaponBalanceDefinition::RuntimePartListCollection)
          ;
}