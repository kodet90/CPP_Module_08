#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{

public:

						MutantStack<T>() {}
						MutantStack<T>(const MutantStack<T> & mutantStack)
	{
		*this = mutantStack;
	}
	virtual				~MutantStack<T>() {}
	MutantStack<T> &	operator=(const MutantStack<T> & mutantStack)
	{
		static_cast<void>(mutantStack);
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin()
	{
		return this->c.begin();
	}
	iterator	end()
	{
		return this->c.end();
	}

};

#endif
