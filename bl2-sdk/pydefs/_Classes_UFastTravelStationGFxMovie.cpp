#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFastTravelStationGFxMovie(py::module &m)
{
    py::class_< UFastTravelStationGFxMovie,  UWillowGFxThirdPersonMovie   >(m, "UFastTravelStationGFxMovie")
		.def_static("StaticClass", &UFastTravelStationGFxMovie::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LocationDisplayNames", &UFastTravelStationGFxMovie::LocationDisplayNames)
        .def_readwrite("LocationStationStrings", &UFastTravelStationGFxMovie::LocationStationStrings)
        .def_readwrite("LocationStationDefinitions", &UFastTravelStationGFxMovie::LocationStationDefinitions)
        .def_readwrite("CurrentWaypointStationDef", &UFastTravelStationGFxMovie::CurrentWaypointStationDef)
        .def_readwrite("FastTravelClip", &UFastTravelStationGFxMovie::FastTravelClip)
        .def_readwrite("InitialSelectionIndex", &UFastTravelStationGFxMovie::InitialSelectionIndex)
        .def_readwrite("SortMode", &UFastTravelStationGFxMovie::SortMode)
        .def_readwrite("LocationsHeader", &UFastTravelStationGFxMovie::LocationsHeader)
        .def_readwrite("LocationsHeaderAlphabetical", &UFastTravelStationGFxMovie::LocationsHeaderAlphabetical)
        .def_readwrite("LocationMissionTeaserHeader", &UFastTravelStationGFxMovie::LocationMissionTeaserHeader)
        .def_readwrite("LocationMissionTeaser", &UFastTravelStationGFxMovie::LocationMissionTeaser)
        .def_readwrite("NextWaypointCheckTime", &UFastTravelStationGFxMovie::NextWaypointCheckTime)
        .def_readwrite("LastSelectionIndex", &UFastTravelStationGFxMovie::LastSelectionIndex)
        .def("eventSetCurrentWaypoint", &UFastTravelStationGFxMovie::eventSetCurrentWaypoint)
        .def("extGenericButtonClicked", &UFastTravelStationGFxMovie::extGenericButtonClicked)
        .def("InitForConsole", &UFastTravelStationGFxMovie::InitForConsole)
        .def("InitForPC", &UFastTravelStationGFxMovie::InitForPC)
        .def("extRequestLocationMissionData", &UFastTravelStationGFxMovie::extRequestLocationMissionData)
        .def("extRegisterMapLocationBlob", &UFastTravelStationGFxMovie::extRegisterMapLocationBlob)
        .def("extEnterTeleportScreen", &UFastTravelStationGFxMovie::extEnterTeleportScreen)
        .def("extActivate", &UFastTravelStationGFxMovie::extActivate)
        .def("eventBeginClosing", &UFastTravelStationGFxMovie::eventBeginClosing)
        .def("extPlayItemChangeSound", &UFastTravelStationGFxMovie::extPlayItemChangeSound)
        .def("BuildDLCMapLocations", &UFastTravelStationGFxMovie::BuildDLCMapLocations)
        .def("ProcessDLCMovies", &UFastTravelStationGFxMovie::ProcessDLCMovies)
        .def("GetFastTravelHeader", &UFastTravelStationGFxMovie::GetFastTravelHeader)
        .def("HandleInputKey", &UFastTravelStationGFxMovie::HandleInputKey)
        .def("BuildMissionDataForLocation", &UFastTravelStationGFxMovie::BuildMissionDataForLocation)
        .def("BuildLocationData", &UFastTravelStationGFxMovie::BuildLocationData)
        .def("eventOnClose", &UFastTravelStationGFxMovie::eventOnClose)
        .def("HandleOpen", &UFastTravelStationGFxMovie::HandleOpen)
          ;
}