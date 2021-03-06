#ifndef _INSTANCES_INC_
#define _INSTANCES_INC_

#include "QPBO.h"

#ifdef _MSC_VER
#pragma warning(disable: 4661)
#endif

// Instantiations

template class QPBO<int>;
template class QPBO<float>;
template class QPBO<double>;
template class QPBO<int64_t>;

template <> 
	inline void QPBO<int>::get_type_information(const char*& type_name, const char*& type_format)
{
	type_name = "int";
	type_format = "d";
}

template <> 
	inline void QPBO<float>::get_type_information(const char*& type_name, const char*& type_format)
{
	type_name = "float";
	type_format = "f";
}

template <> 
	inline void QPBO<double>::get_type_information(const char*& type_name, const char*& type_format)
{
	type_name = "double";
	type_format = "Lf";
}

template <> 
	inline void QPBO<int64_t>::get_type_information(const char*& type_name, const char*& type_format)
{
	type_name = "int64_t";
	type_format = "lld";
}

#endif
