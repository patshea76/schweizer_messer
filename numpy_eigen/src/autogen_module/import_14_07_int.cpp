// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_14_07_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 14, 7 > >::register_converter();
}
