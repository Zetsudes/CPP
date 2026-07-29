
#include "Span.hpp"
#include <algorithm>
#include <climits>
#include <numeric>

Span::Span(unsigned int N) : _maxSize(N)
{
	_numbers.reserve(N);
}

Span::Span(const Span &other) : _maxSize(other._maxSize),
	_numbers(other._numbers)
{
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_maxSize = other._maxSize;
		_numbers = other._numbers;
	}
	return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int number)
{
	if (_numbers.size() >= _maxSize)
		throw SpanFullException();
	_numbers.push_back(number);
}

int Span::shortestSpan() const
{
	if (_numbers.size() < 2)
		throw NotEnoughNumbersException();

	std::vector<int> sorted(_numbers);
	std::sort(sorted.begin(), sorted.end());

	std::vector<int> diffs(sorted.size());
	std::adjacent_difference(sorted.begin(), sorted.end(), diffs.begin());

	return (*std::min_element(diffs.begin() + 1, diffs.end()));
}

int Span::longestSpan() const
{
	if (_numbers.size() < 2)
		throw NotEnoughNumbersException();

	std::vector<int>::const_iterator minIt = std::min_element(_numbers.begin(),
			_numbers.end());
	std::vector<int>::const_iterator maxIt = std::max_element(_numbers.begin(),
			_numbers.end());

	return (*maxIt - *minIt);
}