#include "PmergeMe.hpp"

template <typename T>
void	PmergeMe::displayNumbers(T &container)
{
	const unsigned int	size = container.size();

	for (unsigned int i = 0; i < size; i++)
		std::cout << container[i] << " ";

	std::cout << std::endl;
}
