#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <list>

using std::string;

class Span
{
	private:
		unsigned int	N;
		std::list<int>	lst;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span& cpy);
		~Span();

		Span&	operator=(const Span& cpy);
		void	addNumber(int num);
		int	shortestSpan();
		int	longestSpan();
};

#endif
