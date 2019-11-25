#include <iostream>
#include "Heap.h"

class A
{
public:
	int data;
	double d;
	std::string name;

	A(int _data, std::string _name, double _d = 4.0) : data{ _data }, name{ _name }, d{ _d }
	{
		std::cout << "A created" << std::endl;
	};

	A& operator=(const A& obj)
	{
		this->data = obj.data;
		this->name = obj.name;
		this->d = obj.d;
		return *this;
	};

	A& operator=(A&& obj)
	{
		this->data = obj.data;
		this->name = obj.name;
		this->d = obj.d;
		return *this;
	};

	bool operator<(const A& obj)
	{
		return this->data < obj.data;
	};

	A(A&& obj) : data{ obj.data }, name{ obj.name }, d{ obj.d }
	{
		std::cout << "A moved" << std::endl;
	};

	A(const A& obj) : data{ obj.data }, name{ obj.name }, d{ obj.d }
	{
		std::cout << "A copyed" << std::endl;
	};

	A() : A(0, "Name") {};
};

int main()
{
	//Heap<int> new_heap;
	//new_heap.insert(5);
	//new_heap.insert(34);
	//new_heap.insert(32);
	//new_heap.insert(12);
	//new_heap.insert(3);
	//new_heap.insert(2);
	//new_heap.insert(6);
	//std::vector<int> heap = new_heap.return_heap();

	////for (auto t : new_heap)
	////{
	////	std::cout << *t << " ";
	////}

	///*for (auto t : heap)
	//{
	//	std::cout << t << " ";
	//}

	//int max = new_heap.remove_max();
	//std::cout << std::endl << max << std::endl;

	//heap = new_heap.return_heap();

	//for (auto t : heap)
	//{
	//	std::cout << t << " ";
	//}
	//std::cout << std::endl;

	//heap = new_heap.return_sorted_heap();

	//for (auto t : heap)
	//{
	//	std::cout << t << " ";
	//}*/
	//
	//heap.clear();

	//heap = new_heap.remove_elements();

	//for (auto t : heap)
	//{
	//	std::cout << t << " ";
	//}

	//new_heap.fill<std::vector<int>>(heap);

	//Heap<A> new_heap;

	//new_heap.emplace(5, "Nick");
	//new_heap.emplace(32, "sdk");
	//new_heap.emplace(12, "asv");


	Heap<int> new_heap;

	new_heap.insert(5);
	new_heap.insert(25);
	new_heap.insert(35);
	new_heap.insert(25);

	auto itr = new_heap.begin();

	for (auto t : new_heap)
	{
		std::cout << t << " ";
	}

}
