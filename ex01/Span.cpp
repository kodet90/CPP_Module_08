#include "Span.h"

Span::Span(): _size(0)
{

}

Span::Span(unsigned int size): _size(size), _vector(0)
{
	//std::cout << "Standard constructor for Span called" << std::endl;
	this->_vector.reserve(this->_size);
}

Span::Span(Span const & span)
{
	//std::cout << "Copy constructor for Span called" << std::endl;
	*this = span;
}

Span::~Span()
{
	//std::cout << "Destructor for Span called" << std::endl;
}

Span &	Span::operator=(Span const & span)
{
	//std::cout << "Assignement operator for Span called" << std::endl;
	if (this != &span)
	{
		this->_size = span._size;
		this->_vector = span._vector;
	}
	return *this;
}

void	Span::addNumber( int number )
{
	if (_vector.size() == _size)
		throw std::out_of_range("Reached maximum size");
	//std::cout << "addNumber added " << number << std::endl;
	_vector.push_back(number);
}

void	Span::addRandomNumbers()
{
	//std::cout << "addRandomNumbers function called" << std::endl;

	while (this->_vector.size() < this->_size)
		this->addNumber(rand());
}

void	Span::addIteratorRange(std::vector<int>::iterator begin,
							   std::vector<int>::iterator end)
{
	std::vector<int>	range(begin, end);

	//std::cout << "addIteratorRange function called" << std::endl;
	if (range.size() > this->_size - this->_vector.size())
		throw std::out_of_range("Iterator Range will not fit");
	copy(range.begin(), range.end(), std::back_inserter(this->_vector));
}

int	Span::shortestSpan() const
{
	std::vector<int>			sorted = this->_vector;
	int							result = this->longestSpan();
	std::vector<int>::iterator	it;

	if (this->_vector.size() <= 1)
		throw std::logic_error("Span requires at least 2 numbers");
	sort(sorted.begin(), sorted.end());
	it = sorted.begin();
	while (result != 0 && it < sorted.end() - 1)
	{
		if (result > *(it + 1) - *it)
		{
			result = *(it + 1) - *it;
		}
		it++;
	}
	return result;
}

int	Span::longestSpan() const
{
	std::vector<int>	sorted = this->_vector;

	if (this->_vector.size() <= 1)
		throw std::logic_error("Span requires at least 2 numbers");
	sort(sorted.begin(), sorted.end());
	return *(sorted.end() - 1) - *sorted.begin();
}

unsigned int	Span::getSize() const
{
	return _size;
}

std::vector<int>	Span::getVector() const
{
	return _vector;
}

std::ostream &	operator<<(std::ostream & o, Span const & span)
{
	o << "Span: " << span.getVector().size() << "/"
	  << span.getSize() << " numbers. Shortest span: "
	  << span.shortestSpan() << ". Longest span: " << span.longestSpan();
	return o;
}
