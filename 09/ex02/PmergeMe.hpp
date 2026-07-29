
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <iostream>
#include <sys/time.h>
#include <cstdlib>
#include <ctime>
#include <climits>
#include <cctype>
#include <sstream>

class PmergeMe
{
    private:
        std::vector<int> _vec;
        std::deque<int> _deq;

        void _parseInput(int argc, char **argv);
        bool _isValidNumber(const std::string& str);

        void _sortVector(std::vector<int>& arr);
        void _sortDeque(std::deque<int>& arr);

        std::vector<size_t> _generateJacobsthal(size_t size);

    public:
        PmergeMe();
        PmergeMe(const PmergeMe& source);
        PmergeMe& operator=(const PmergeMe& source);
        ~PmergeMe();

        void execute(int argc, char **argv);


};

#endif