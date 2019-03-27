#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGrenadeModDefinition(py::module &m)
{
    py::class_< UGrenadeModDefinition,  UEquipableItemDefinition   >(m, "UGrenadeModDefinition")
		.def_static("StaticClass", &UGrenadeModDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DefaultProjectileDefinition", &UGrenadeModDefinition::DefaultProjectileDefinition)
        .def_readwrite("ProjectileBaseValues", &UGrenadeModDefinition::ProjectileBaseValues)
        .def_readwrite("SetProjectileSequenceState", &UGrenadeModDefinition::SetProjectileSequenceState)
        .def("GetEquipmentLocation", &UGrenadeModDefinition::GetEquipmentLocation)
        .def("OnGrenadeKilledEnemy", &UGrenadeModDefinition::OnGrenadeKilledEnemy)
        .def("OnGrenadeKilledNeutral", &UGrenadeModDefinition::OnGrenadeKilledNeutral)
        .def("OnGrenadeDamagedNeutral", &UGrenadeModDefinition::OnGrenadeDamagedNeutral)
        .def("OnGrenadeDamagedFriendly", &UGrenadeModDefinition::OnGrenadeDamagedFriendly)
        .def("OnGrenadeDamagedEnemy", &UGrenadeModDefinition::OnGrenadeDamagedEnemy)
        .def("OnGrenadeExploded", &UGrenadeModDefinition::OnGrenadeExploded)
        .def("OnGrenadeSpawned", &UGrenadeModDefinition::OnGrenadeSpawned)
          ;
}