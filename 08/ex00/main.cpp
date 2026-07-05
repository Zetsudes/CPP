
#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(42);
	vec.push_back(5);

	std::list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);

	// VECTOR Found 
	std::vector<int>::iterator vit = easyfind(vec, 42);
	if (vit != vec.end())
		std::cout << "Found in vector: " << *vit << std::endl;
	else
		std::cout << "Not found in vector" << std::endl;

	// VECTOR Not found
	vit = easyfind(vec, 99);
	if (vit != vec.end())
		std::cout << "Found in vector: " << *vit << std::endl;
	else
		std::cout << "Not found in vector" << std::endl;

	// LIST Found 
	std::list<int>::iterator lit = easyfind(lst, 20);
	if (lit != lst.end())
		std::cout << "Found in list: " << *lit << std::endl;
	else
		std::cout << "Not found in list" << std::endl;

	// LIST Not found
	lit = easyfind(lst, 999);
	if (lit != lst.end())
		std::cout << "Found in list: " << *lit << std::endl;
	else
		std::cout << "Not found in list" << std::endl;

	// Last element
	vit = easyfind(vec, 5);
	if (vit != vec.end())
		std::cout << "Found last element in vector: " << *vit << std::endl;
	else
		std::cout << "Not found in vector" << std::endl;

	return (0);
}