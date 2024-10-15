#include "Span.hpp"

void	test2(Span& sp)
{
	sp = Span(100000);
	for (int i = 0; i < 100000; i++)
		sp.addNumber(i * 2);
}

void	test1(Span& sp)
{
	sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	//sp.addNumber(21);
}

int	main()
{
	Span	sp;

	try
	{
		test1(sp);
		//test2(sp);
	}
	catch (std::out_of_range& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "small span: " << sp.shortestSpan() << std::endl;
	std::cout << "large span: " << sp.longestSpan() << std::endl;
}
