// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>

#include <boost/cstdint.hpp>


void import_D_4_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, Eigen::Dynamic, 4 > >::register_converter();
}

