#ifndef CPP_MODULE_08_EX00_EASYFIND_H
#define CPP_MODULE_08_EX00_EASYFIND_H
#include <algorithm>

template<typename T>
typename T::iterator	easyfind(T & container, int const needle)
{
	return find(container.begin(), container.end(), needle);
}

#endif //CPP_MODULE_08_EX00_EASYFIND_H
