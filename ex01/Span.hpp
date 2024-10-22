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
		void	print_list();
		int	shortestSpan();
		int	longestSpan();

		template < typename T >
		void	addMany(T cont)
		{
			if (cont.size() > this->av)
				throw std::out_of_range("\tout of range");
			this->av -= cont.size();
			this->lst.insert(this->lst.begin(), cont.begin(), cont.end());
		}
};

#endif
