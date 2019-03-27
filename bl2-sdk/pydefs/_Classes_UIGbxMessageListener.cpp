#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGbxMessageListener(py::module &m)
{
    py::class_< UIGbxMessageListener,  UInterface   >(m, "UIGbxMessageListener")
		.def_static("StaticClass", &UIGbxMessageListener::StaticClass, py::return_value_policy::reference)
        .def("WantsToStopListening", &UIGbxMessageListener::WantsToStopListening)
        .def("GetActor", &UIGbxMessageListener::GetActor, py::return_value_policy::reference)
        .def("GetListenerLocation", &UIGbxMessageListener::GetListenerLocation)
        .def("GetAllegiance", &UIGbxMessageListener::GetAllegiance, py::return_value_policy::reference)
        .def("ReceiveMessage", &UIGbxMessageListener::ReceiveMessage)
        .def("CaresAboutMessage", &UIGbxMessageListener::CaresAboutMessage)
          ;
}