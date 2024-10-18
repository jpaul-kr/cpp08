#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <deque>

using std::string;

template < typename T, typename Cont = std::deque<T> >
class MutantStack : public std::stack<T, Cont>
{
	public:
		typedef typename Cont::iterator		iterator;
		typedef typename Cont::const_iterator	const_iterator;

		MutantStack() : std::stack<T, Cont>() {}
		MutantStack(const MutantStack& cpy) : std::stack<T, Cont>(cpy) {}
		~MutantStack() {}
	
		MutantStack&	operator=(const MutantStack& cpy)
		{
			if (this != &cpy)
				std::stack<T, Cont>::operator=(cpy);
			return *this;
		}

		iterator	begin() {return this->c.begin();}
		iterator	end() {return this->c.end();}

		const_iterator	begin() const {return this->c.begin();}
		const_iterator	end()  const{return this->c.end();}

};

#endif
