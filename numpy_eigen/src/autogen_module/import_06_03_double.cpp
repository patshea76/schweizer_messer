// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_06_03_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 6, 3 > >::register_converter();
}
