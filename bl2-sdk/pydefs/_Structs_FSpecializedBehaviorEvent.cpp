#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpecializedBehaviorEvent(py::module &m)
{
    py::class_< FSpecializedBehaviorEvent >(m, "FSpecializedBehaviorEvent")
        .def_readwrite("EventName", &FSpecializedBehaviorEvent::EventName)
  ;
}