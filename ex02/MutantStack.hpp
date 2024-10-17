#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

using std::string;

template <typename T>
class MutantStack : std::stack<T>
{
	public:
		typedef std::c::iterator	iterator;

};

#endif
