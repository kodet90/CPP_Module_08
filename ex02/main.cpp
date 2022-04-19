#include "main.h"
#include <stack>
#include <list>

//int main()
//{
//	MutantStack<int> mstack;
//	mstack.push(5);
//	mstack.push(17);
//	std::cout << mstack.top() << std::endl;
//	mstack.pop();
//	std::cout << mstack.size() << std::endl;
//	mstack.push(3);
//	mstack.push(5);
//	mstack.push(737);
//	//[...]
//	mstack.push(0);
//	MutantStack<int>::iterator it = mstack.begin();
//	MutantStack<int>::iterator ite = mstack.end();
//	++it;
//	--it;
//	while (it != ite)
//	{
//		std::cout << *it << std::endl;
//		++it;
//	}
//	std::stack<int> s(mstack);
//
//	std::cout << std::endl;
//
//	std::list<int> list;
//	list.push_back(5);
//	list.push_back(17);
//	std::cout << list.back() << std::endl;
//	list.pop_back();
//	std::cout << list.size() << std::endl;
//	list.push_back(3);
//	list.push_back(5);
//	list.push_back(737);
//	//[...]
//	list.push_back(0);
//	std::list<int>::iterator list_it = list.begin();
//	std::list<int>::iterator list_ite = list.end();
//	++list_it;
//	--list_it;
//	while (list_it != list_ite)
//	{
//		std::cout << *list_it << std::endl;
//		++list_it;
//	}
//	std::list<int> list_s(list);
//	return 0;
//}

int main()
{
	{
		MutantStack<int> mutantStack;

		mutantStack.push(1);
		mutantStack.push(2);
		mutantStack.push(3);
		mutantStack.push(4);
		mutantStack.push(5);
		MutantStack<int>::iterator it = mutantStack.begin();
		while (it < mutantStack.end()) {
			std::cout << *it << std::endl;
			it++;
		}
		std::cout << std::endl;
		it = mutantStack.end() - 1;
		while (it >= mutantStack.begin()) {
			std::cout << *it << std::endl;
			it--;
		}
	}
	std::cout << std::endl;
	{
		MutantStack<int> mutantStack;

		mutantStack.push(4);
		mutantStack.push(2);
		mutantStack.push(5);
		mutantStack.push(3);
		mutantStack.push(1);
		MutantStack<int>::iterator it = mutantStack.begin();
		while (it < mutantStack.end()) {
			std::cout << *it << std::endl;
			it++;
		}
		int	temp;
		for (unsigned int i = 0; i < mutantStack.size(); i++)
		{
			for (it = mutantStack.begin(); it < mutantStack.end() - 1; it++)
			{
				if (*it > *(it + 1))
				{
					temp = *it;
					*it = *(it + 1);
					*(it + 1) = temp;
				}
			}
		}
		std::cout << std::endl;
		it = mutantStack.begin();
		while (it < mutantStack.end()) {
			std::cout << *it << std::endl;
			it++;
		}
	}
	return 0;
}