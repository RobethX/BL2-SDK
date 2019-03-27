#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowElevatorButton(py::module &m)
{
    py::class_< UActorFactoryWillowElevatorButton,  UActorFactoryInteractiveObject   >(m, "UActorFactoryWillowElevatorButton")
		.def_static("StaticClass", &UActorFactoryWillowElevatorButton::StaticClass, py::return_value_policy::reference)
          ;
}