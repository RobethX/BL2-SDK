#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackVectorBase(py::module &m)
{
    py::class_< UInterpTrackVectorBase,  UInterpTrack   >(m, "UInterpTrackVectorBase")
		.def_static("StaticClass", &UInterpTrackVectorBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VectorTrack", &UInterpTrackVectorBase::VectorTrack)
        .def_readwrite("CurveTension", &UInterpTrackVectorBase::CurveTension)
          ;
}