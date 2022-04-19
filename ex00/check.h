#ifndef CPP_MODULE_08_EX00_CHECK_H
#define CPP_MODULE_08_EX00_CHECK_H

template<typename T>
void	check(T const & iterator, T const & end)
{
	if (iterator != end)
		std::cout << *iterator << " found" << std::endl;
	else
		std::cout << *iterator << " not found" << std::endl;
}

#endif //CPP_MODULE_08_EX00_CHECK_H
