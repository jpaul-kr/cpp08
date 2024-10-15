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

int	Span::shortestSpan()
{
	std::list<int>			sort(this->lst);
	sort.sort();

	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = sort.end();
	int				small;
	int				prev;

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
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = this->lst.end();
	int	small = *(this->lst.begin());
	int	large = *(this->lst.begin());

	for (it = this->lst.begin(); it != ite; it++)
	{
		if (*it < small)
			small = *it;
		if (*it > large)
			large = *it;
	}
	return large - small;
}
