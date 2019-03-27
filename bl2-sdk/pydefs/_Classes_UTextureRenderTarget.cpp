#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTextureRenderTarget(py::module &m)
{
    py::class_< UTextureRenderTarget,  UTexture   >(m, "UTextureRenderTarget")
		.def_static("StaticClass", &UTextureRenderTarget::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TargetGamma", &UTextureRenderTarget::TargetGamma)
          ;
}