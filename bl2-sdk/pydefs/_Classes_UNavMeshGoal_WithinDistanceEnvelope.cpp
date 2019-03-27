#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshGoal_WithinDistanceEnvelope(py::module &m)
{
    py::class_< UNavMeshGoal_WithinDistanceEnvelope,  UNavMeshPathGoalEvaluator   >(m, "UNavMeshGoal_WithinDistanceEnvelope")
		.def_static("StaticClass", &UNavMeshGoal_WithinDistanceEnvelope::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MaxDistance", &UNavMeshGoal_WithinDistanceEnvelope::MaxDistance)
        .def_readwrite("MinDistance", &UNavMeshGoal_WithinDistanceEnvelope::MinDistance)
        .def_readwrite("MinTraversalDist", &UNavMeshGoal_WithinDistanceEnvelope::MinTraversalDist)
        .def_readwrite("EnvelopeTestPoint", &UNavMeshGoal_WithinDistanceEnvelope::EnvelopeTestPoint)
        .def("Recycle", &UNavMeshGoal_WithinDistanceEnvelope::Recycle)
        .def("GoalWithinEnvelopeToLoc", &UNavMeshGoal_WithinDistanceEnvelope::GoalWithinEnvelopeToLoc)
          ;
}