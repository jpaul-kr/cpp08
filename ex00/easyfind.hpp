#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include <deque>

using std::string;

template <typename T>
void	easyfind(T cont, int num)
{
	typename T::const_iterator	it;
	typename T::const_iterator	ite = cont.end();

	for (it = cont.begin(); it != ite ; it++)
	{
		if (*it == num)
		{
			std::cout << num << " has been found!" << std::endl;
			return ;
		}
	}
	throw std::logic_error("\tnumber not found");
}

#endif
