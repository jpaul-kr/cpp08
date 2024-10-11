#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int n) : N(n) {}

Span::Span(const Span& cpy)
{
	this->N = cpy.N;
	this->lst = cpy.lst;
}

Span::~Span() {}

Span&	Span::operator=(const Span& cpy)
{
	this->N = cpy.N;
	this->lst = cpy.lst;
	return *this;
}

void	Span::addNumber(int num)
{
	if (!this->N)
		throw std::out_of_range("\tout of range");
	this->lst.push_back(num);
	this->N--;
}

int	Span::shortestSpan()
{
}

int	Span::longestSpan()
{
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = this->lst.end();
	int	small = *(this->lst.begin());
	int	large = *(this->lst.begin());
}
