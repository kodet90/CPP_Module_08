#include "main.h"

int	main() {
	std::list<int>				list;
	std::list<int>::iterator	iterator;

	for (int i = 0; i < 10; i++)
		list.push_back(i);
	iterator = easyfind(list, 5);
	check(iterator, list.end());
	iterator = easyfind(list, 10);
	check(iterator, list.end());
	return 0;
}