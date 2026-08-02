
#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: Bad number of arguments" << std::endl;
        return 1;
    }

    PmergeMe pmerge;
    pmerge.execute(argc, argv);

    return 0;
}