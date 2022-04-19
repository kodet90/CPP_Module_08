#ifndef CPP_MODULE_08_EX01_SPAN_H
#define CPP_MODULE_08_EX01_SPAN_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <iterator>

class Span
{

public:

						Span(unsigned int size);
						Span(const Span & span);
	virtual				~Span();
	Span &				operator=(const Span & span);

	void				addNumber(int number);
	void				addRandomNumbers();
	void				addIteratorRange(std::vector<int>::iterator begin,
										 std::vector<int>::iterator end);
	int					shortestSpan() const;
	int					longestSpan() const;
	unsigned int		getSize() const;
	std::vector<int>	getVector() const;

private:

	unsigned int		_size;
	std::vector<int>	_vector;

	Span();

};

std::ostream &	operator<<(std::ostream & o, const Span & span);

#endif //CPP_MODULE_08_EX01_SPAN_H
