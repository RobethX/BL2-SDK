#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FROscillator(py::module &m)
{
    py::class_< FROscillator >(m, "FROscillator")
        .def_readwrite("Pitch", &FROscillator::Pitch)
        .def_readwrite("Yaw", &FROscillator::Yaw)
        .def_readwrite("Roll", &FROscillator::Roll)
  ;
}