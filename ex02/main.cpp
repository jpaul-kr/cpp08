#include "MutantStack.hpp"
#include <list>

void	test()
{
	MutantStack<float>			mstack;
	std::list<float>			lst;

	for (float i = 1; i <= 10; i++)
	{
		mstack.push(i / 2);
		lst.push_back(i / 2);
	}

	MutantStack<float>::const_iterator	stack_it = mstack.begin();
	std::list<float>::const_iterator	list_it = lst.begin();

	std::cout << "\tmutant stack:" << std::endl;
	while (stack_it != mstack.end())
		std::cout << *(stack_it++) << " ";
	std::cout << std::endl;

	std::cout << "\tlist:" << std::endl;
	while (list_it != lst.end())
		std::cout << *(list_it++) << " ";
	std::cout << std::endl;

	std::cout << mstack.top() << " " << lst.back() << std::endl;
}

int	main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	//std::cout << mstack.top() << std::endl;
	//mstack.pop();
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::stack<int> s(mstack);
	
	/*std::list<int> mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(0);

	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}*/
	//test();
}
