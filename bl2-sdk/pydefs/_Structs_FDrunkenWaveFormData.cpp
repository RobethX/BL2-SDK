#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDrunkenWaveFormData(py::module &m)
{
    py::class_< FDrunkenWaveFormData >(m, "FDrunkenWaveFormData")
        .def_readwrite("WaveFreq", &FDrunkenWaveFormData::WaveFreq)
        .def_readwrite("WaveAmp", &FDrunkenWaveFormData::WaveAmp)
        .def_readwrite("WavePhase", &FDrunkenWaveFormData::WavePhase)
  ;
}