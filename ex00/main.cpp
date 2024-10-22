#include "easyfind.hpp"

int	main()
{
	int	find = 1;

	std::list<int>		container;
	//std::vector<int>	container;
	//std::deque<int>		container;

	container.push_back(1);
	container.push_back(2);
	container.push_back(3);

	try
	{
		easyfind(container, find);
	}
	catch (std::logic_error& e)
	{
		std::cout << e.what() << std::endl;
	}
}
