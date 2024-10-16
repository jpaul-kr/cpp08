#include "Span.hpp"

Span::Span() : N(0), av(0) {}

Span::Span(unsigned int n) : N(n), av(n) {}

Span::Span(const Span& cpy)
{
	this->lst = cpy.lst;
	this->N = cpy.N;
	this->av = cpy.av;
}

Span::~Span() {}

Span&	Span::operator=(const Span& cpy)
{
	this->lst = cpy.lst;
	this->N = cpy.N;
	this->av = cpy.av;
	return *this;
}

void	Span::addNumber(int num)
{
	if (!this->av)
		throw std::out_of_range("\tout of range");
	this->lst.push_back(num);
	this->av--;
}

void	Span::addMany(int start, int end)
{
	int iter = start > end ? -1 : 1;
	std::list<int>::const_iterator	it;

	for (int i = start; i != end; i += iter)
		addNumber(i);
}

int	Span::shortestSpan()
{
	std::list<int>			sort(this->lst);
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite;
	int				small;
	int				prev;

	sort.sort();
	ite = sort.end();
	for (it = sort.begin(); it != ite; it++)
	{
		if (it == sort.begin())
		{
			prev = *(it++);
			small = *(it--) - prev;
		}
		else if (*it - prev < small)
			small = *it - prev;
		prev = *it;
	}
	return small;
}

int	Span::longestSpan()
{
	std::list<int>	sort(this->lst);

	sort.sort();
	return sort.back() - *(sort.begin());
}

void	Span::print_list()
{
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = this->lst.end();

	std::cout << "list: ";
	for (it = this->lst.begin(); it != ite; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}
