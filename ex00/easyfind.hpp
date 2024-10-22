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
	typename T::const_iterator	it = std::find(cont.begin(), cont.end(), num);

	if (it == cont.end())
		throw std::logic_error("\tnumber not found");
	else
		std::cout << "number " << num << " has been found!" << std::endl;
}

#endif
