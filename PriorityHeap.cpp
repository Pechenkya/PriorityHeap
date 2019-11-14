#include <iostream>
#include "Heap.h"

int main()
{
	Heap<int> new_heap;
	new_heap.insert(5);
	new_heap.insert(34);
	new_heap.insert(32);
	new_heap.insert(12);
	new_heap.insert(3);
	new_heap.insert(2);
	new_heap.insert(6);
	std::vector<int> heap = new_heap.return_heap();

	//for (auto t : new_heap)
	//{
	//	std::cout << *t << " ";
	//}

	for (auto t : heap)
	{
		std::cout << t << " ";
	}

	int max = new_heap.remove_max();
	std::cout << std::endl << max << std::endl;

	heap = new_heap.return_heap();

	for (auto t : heap)
	{
		std::cout << t << " ";
	}
	std::cout << std::endl;

	heap = new_heap.return_sorted_heap();

	for (auto t : heap)
	{
		std::cout << t << " ";
	}
}
