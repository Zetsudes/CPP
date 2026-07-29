
#include "PmergeMe.hpp"

PmergeMe::PmergeMe() 
{

}

PmergeMe::PmergeMe(const PmergeMe& source)
{
    *this = source;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& source)
{
    if (this != &source)
    {
        this->_vec = source._vec;
        this->_deq = source._deq;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

bool PmergeMe::_isValidNumber(const std::string& str) 
{
    if (str.empty())
        return false;
    
    for (size_t i = 0; i < str.length(); ++i) 
    {
        if (!std::isdigit(str[i]))
            return false;
    }
        std::stringstream ss(str);
    long n;
    ss >> n;
    
    if (ss.fail() || n > INT_MAX || n < 0)
        return false;
        
    return true;
}

void PmergeMe::_parseInput(int argc, char **argv) 
{
    if (argc < 2) 
    {
        throw std::runtime_error("Error: bad arguments");
    }

    for (int i = 1; i < argc; ++i) 
    {
        std::string arg = argv[i];
        
        if (!_isValidNumber(arg)) 
        {
            throw std::runtime_error("Error");
        }
        
        std::stringstream ss(arg);
        int val;
        ss >> val;
        
        _vec.push_back(val);
        _deq.push_back(val);
    }
}

void PmergeMe::_sortVector(std::vector<int>& arr)
{
    size_t n = arr.size();

    if (n <= 1) // deja trie
        return;

    bool has_straggler = (n % 2 != 0); // si n impair
    int straggler = 0;
    if (has_straggler)
    {
        straggler = arr.back(); // on le met a la fin
        arr.pop_back(); // on l'enleve
    }

    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i < arr.size(); i += 2) // tri des pairs
    {
        if (arr[i] > arr[i + 1])
            pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
        else
            pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
        
    }

    std::vector<int> main_chain;
    std::vector<int> pending;

    for (size_t i = 0; i < pairs.size(); i++)
    {
        main_chain.push_back(pairs[i].first); // grand
        pending.push_back(pairs[i].second); // petit
    }

    _sortVector(main_chain); // tri les grands

    std::vector<int> sorted_pending; // reordonne pending car main_chain a change
    for (size_t i = 0; i < main_chain.size(); ++i)
    {
        for (size_t j = 0; j < pairs.size() ++j)
        {
            if (main_chain[i] == pairs[j].first)
            {
                sorted_pending.push_back(pairs[j].second);
                pairs[j].first = -1;
                break;
            }
        }
    }
    pending = sorted_pending;
}

void PmergeMe::execute(int argc, char **argv) 
{
    try 
    {
        _parseInput(argc, argv);
    } catch (const std::exception& e) 
    {
        std::cerr << e.what() << std::endl;
        return; 
    }
   
}

