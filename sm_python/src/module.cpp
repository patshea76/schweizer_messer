#include <numpy_eigen/boost_python_headers.hpp>
#include <boost/python/suite/indexing/vector_indexing_suite.hpp>

using namespace boost::python;

//typedef UniformCubicBSpline<Eigen::Dynamic> UniformCubicBSplineX;


void import_rotational_kinematics_python();
void export_rotations();
void export_transformations();

BOOST_PYTHON_MODULE(libsm_python)
{
  
  import_rotational_kinematics_python();
  export_rotations();
  export_transformations();
}
