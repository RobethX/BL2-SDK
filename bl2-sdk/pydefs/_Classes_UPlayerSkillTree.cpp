#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerSkillTree(py::module &m)
{
    py::class_< UPlayerSkillTree,  UObject   >(m, "UPlayerSkillTree")
		.def_static("StaticClass", &UPlayerSkillTree::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SkillTreeRootIndex", &UPlayerSkillTree::SkillTreeRootIndex)
        .def_readwrite("Branches", &UPlayerSkillTree::Branches)
        .def_readwrite("Tiers", &UPlayerSkillTree::Tiers)
        .def_readwrite("Skills", &UPlayerSkillTree::Skills)
        .def_readwrite("SkillTreeListeners", &UPlayerSkillTree::SkillTreeListeners)
        .def("GetSkillPointsSpentInTree", &UPlayerSkillTree::GetSkillPointsSpentInTree)
        .def("UnRegisterListener", &UPlayerSkillTree::UnRegisterListener)
        .def("RegisterListener", &UPlayerSkillTree::RegisterListener)
        .def("Initialize", &UPlayerSkillTree::Initialize)
        .def("UpdateBranchProgression", &UPlayerSkillTree::UpdateBranchProgression)
        .def("InitializeGFxHelper", &UPlayerSkillTree::InitializeGFxHelper)
        .def("InitializeGFxHelper_ActionAbility", &UPlayerSkillTree::InitializeGFxHelper_ActionAbility)
        .def("AllSkills", [](UPlayerSkillTree &self ) { class USkillDefinition** pySkillDef = 0 ;   self.AllSkills(pySkillDef); return py::make_tuple(*pySkillDef); })
        .def("AllSkillsOfType", [](UPlayerSkillTree &self , unsigned char SkillType) { class USkillDefinition** pySkillDef = 0 ;   self.AllSkillsOfType(SkillType, pySkillDef); return py::make_tuple(*pySkillDef); })
        .def("HasTrainedASkillOfType", &UPlayerSkillTree::HasTrainedASkillOfType)
        .def("GetActionSkill", &UPlayerSkillTree::GetActionSkill, py::return_value_policy::reference)
        .def("ApplySkillSaveGameData", &UPlayerSkillTree::ApplySkillSaveGameData)
        .def("SaveSkillSaveGameData", &UPlayerSkillTree::SaveSkillSaveGameData)
        .def("GetTierLayout", &UPlayerSkillTree::GetTierLayout)
        .def("GetTierState", &UPlayerSkillTree::GetTierState)
        .def("GetBranchState", &UPlayerSkillTree::GetBranchState)
        .def("GetSkillState", &UPlayerSkillTree::GetSkillState)
        .def("DumpTree", &UPlayerSkillTree::DumpTree)
        .def("SetSkillGrade", &UPlayerSkillTree::SetSkillGrade)
        .def("UpgradeSkill", &UPlayerSkillTree::UpgradeSkill)
          ;
}