#include "main.h"

//int main()
//{
//	Span sp = Span(5);
//	sp.addNumber(6);
//	sp.addNumber(3);
//	sp.addNumber(17);
//	sp.addNumber(9);
//	sp.addNumber(11);
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
//	return 0;
//}

int	main()
{
	Span	span1(3);
	try
	{
		span1.addNumber(1);
		try
		{
			std::cout << span1 << std::endl;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		span1.addNumber(10);
		try
		{
			std::cout << span1 << std::endl;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		span1.addNumber(100);
		try
		{
			std::cout << span1 << std::endl;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		span1.addNumber(1000);
		try
		{
			std::cout << span1 << std::endl;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

//	Span	span2(8);
	Span	span2(20000);
	try
	{
		span2.addNumber(3);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	span2.addRandomNumbers();
	try
	{
		std::cout << span2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	Span				span3(5);
	std::vector<int>	vector;

	vector.push_back(1);
	vector.push_back(10);
	vector.push_back(100);
	vector.push_back(1000);
	vector.push_back(10000);
	try
	{
		span3.addIteratorRange(vector.begin(), vector.end());
		std::cout << span3 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	Span temp(span3);
	std::cout << "copy constructor " << temp << std::endl;
	Span temp2(0);
	temp2 = temp;
	std::cout << "assign operator " << temp2 << std::endl;
	return 0;
}