
#include "replace.hpp"

bool    parseArgs(int argc, char **argv, std::string &filename, std::string &s1, std::string &s2)
{
    if (argc != 4)
    {
        std::cerr << "Error: 3 arguments required!" << std::endl;
        return false;
    }
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    
    if (s1.empty())
    {
        std::cerr << "Error: empty s1 :(" << std::endl;
        return false;
    }
    return true;
}

bool    parseFile(const std::string &filename)
{
    std::ifstream infile(filename.c_str()); // ifstream expects a null terminated string
    if (!infile)
    {
        std::cerr << "Error: cannot open file" << std::endl;
        return false;
    }
    return true;
}