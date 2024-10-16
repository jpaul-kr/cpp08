#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <list>

using std::string;

class Span
{
	private:
		std::list<int>	lst;
		unsigned int	N;
		unsigned int	av;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span& cpy);
		~Span();

		Span&	operator=(const Span& cpy);
		void	addNumber(int num);
		void	addMany(int num, int amount);
		void	print_list();
		int	shortestSpan();
		int	longestSpan();
};

#endif
