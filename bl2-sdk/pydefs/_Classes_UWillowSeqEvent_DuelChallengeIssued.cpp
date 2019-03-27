#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_DuelChallengeIssued(py::module &m)
{
    py::class_< UWillowSeqEvent_DuelChallengeIssued,  USequenceEvent   >(m, "UWillowSeqEvent_DuelChallengeIssued")
		.def_static("StaticClass", &UWillowSeqEvent_DuelChallengeIssued::StaticClass, py::return_value_policy::reference)
          ;
}