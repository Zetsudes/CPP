#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>

int main(void)
{
	std::cout << " -------<3 subject tests <3-------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
	std::cout << "longestSpan: " << sp.longestSpan() << std::endl;

	std::cout << "" << std::endl;
	std::cout << " -------<3 test addRange with a vector <3-------" << std::endl;
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	Span spRange(3);
	spRange.addRange(vec.begin(), vec.end());
	std::cout << "addRange test-> shortestSpan: " << spRange.shortestSpan() << std::endl;
	std::cout << "addRange test-> longestSpan: " << spRange.longestSpan() << std::endl;

	std::cout << "" << std::endl;
	std::cout << " -------<3 test 10000 numbers with addRange <3-------" << std::endl;
	std::vector<int> bigVec;
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	for (int i = 0; i < 10000; i++)
		bigVec.push_back(std::rand());

	Span bigSpan(10000);
	bigSpan.addRange(bigVec.begin(), bigVec.end());
	std::cout << "10000 numbers-> shortestSpan: " << bigSpan.shortestSpan() << std::endl;
	std::cout << "10000 numbers-> longestSpan: " << bigSpan.longestSpan() << std::endl;

	std::cout << "" << std::endl;
	std::cout << " -------<3 test exceptions <3-------" << std::endl;
	try
	{
		Span full(2);
		full.addNumber(1);
		full.addNumber(2);
		full.addNumber(3);
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}

	try
	{
		Span empty(5);
		empty.shortestSpan();
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}

	return (0);
}