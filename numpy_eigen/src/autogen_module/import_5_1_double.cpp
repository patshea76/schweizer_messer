// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>

#include <boost/cstdint.hpp>


void import_5_1_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 5, 1 > >::register_converter();
}

