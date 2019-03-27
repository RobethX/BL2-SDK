#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AHUD(py::module &m)
{
    py::class_< AHUD,  AActor   >(m, "AHUD")
		.def_static("StaticClass", &AHUD::StaticClass, py::return_value_policy::reference)
        .def_readwrite("WhiteColor", &AHUD::WhiteColor)
        .def_readwrite("GreenColor", &AHUD::GreenColor)
        .def_readwrite("RedColor", &AHUD::RedColor)
        .def_readwrite("PlayerOwner", &AHUD::PlayerOwner)
        .def_readwrite("AnimDebugThis", &AHUD::AnimDebugThis)
        .def_readwrite("AnimDebugStartingPoint", &AHUD::AnimDebugStartingPoint)
        .def_readwrite("HudCanvasScale", &AHUD::HudCanvasScale)
        .def_readwrite("PostRenderedActors", &AHUD::PostRenderedActors)
        .def_readwrite("ConsoleMessages", &AHUD::ConsoleMessages)
        .def_readwrite("ConsoleColor", &AHUD::ConsoleColor)
        .def_readwrite("ConsoleMessageCount", &AHUD::ConsoleMessageCount)
        .def_readwrite("ConsoleFontSize", &AHUD::ConsoleFontSize)
        .def_readwrite("MessageFontOffset", &AHUD::MessageFontOffset)
        .def_readwrite("MaxHUDAreaMessageCount", &AHUD::MaxHUDAreaMessageCount)
        .def_readwrite("ConsoleMessagePosX", &AHUD::ConsoleMessagePosX)
        .def_readwrite("ConsoleMessagePosY", &AHUD::ConsoleMessagePosY)
        .def_readwrite("Canvas", &AHUD::Canvas)
        .def_readwrite("LastHUDRenderTime", &AHUD::LastHUDRenderTime)
        .def_readwrite("RenderDelta", &AHUD::RenderDelta)
        .def_readwrite("SizeX", &AHUD::SizeX)
        .def_readwrite("SizeY", &AHUD::SizeY)
        .def_readwrite("CenterX", &AHUD::CenterX)
        .def_readwrite("CenterY", &AHUD::CenterY)
        .def_readwrite("RatioX", &AHUD::RatioX)
        .def_readwrite("RatioY", &AHUD::RatioY)
        .def_readwrite("DebugDisplay", &AHUD::DebugDisplay)
        .def_readwrite("ActiveDebugDisplay", &AHUD::ActiveDebugDisplay)
        .def_readwrite("KismetTextInfo", &AHUD::KismetTextInfo)
        .def("eventGetShowZones", &AHUD::eventGetShowZones)
        .def("eventGetShowCoverNum", &AHUD::eventGetShowCoverNum)
        .def("eventGetShowCoverVis", &AHUD::eventGetShowCoverVis)
        .def("eventGetShowCoverRegions", &AHUD::eventGetShowCoverRegions)
        .def("eventOnLostFocusPause", &AHUD::eventOnLostFocusPause)
        .def("PlayerOwnerDied", &AHUD::PlayerOwnerDied)
        .def("AddConsoleMessage", &AHUD::AddConsoleMessage)
        .def("eventDisplayConsoleMessages", &AHUD::eventDisplayConsoleMessages)
        .def("Message", &AHUD::Message)
        .def("eventDisplayBadConnectionAlert", &AHUD::eventDisplayBadConnectionAlert)
        .def("DrawbShowHUDIsFalseHUD", &AHUD::DrawbShowHUDIsFalseHUD)
        .def("DrawHUD", &AHUD::DrawHUD)
        .def("eventShowDebugInfo", &AHUD::eventShowDebugInfo)
        .def("eventPostRender", &AHUD::eventPostRender)
        .def("PreCalcValues", &AHUD::PreCalcValues)
        .def("SetShowScores", &AHUD::SetShowScores)
        .def("ShowScores", &AHUD::ShowScores)
        .def("ShowHUD", &AHUD::ShowHUD)
        .def("ToggleHUD", &AHUD::ToggleHUD)
        .def("AddPostRenderedActor", &AHUD::AddPostRenderedActor)
        .def("RemovePostRenderedActor", &AHUD::RemovePostRenderedActor)
        .def("eventPostBeginPlay", &AHUD::eventPostBeginPlay)
        .def("Draw2DLine", &AHUD::Draw2DLine)
        .def("Draw3DLine", &AHUD::Draw3DLine)
          ;
}