
#include "replace.hpp"

int main(int argc, char **argv)
{
    std::string filename, s1, s2;
    std::string line;

    if (!parseArgs(argc, argv, filename, s1, s2))
        return 1;
    if (!parseFile(filename))
        return 1;
    std::ifstream infile(filename.c_str()); // reading
    std::ofstream outfile((filename + ".replace").c_str()); // writing

    while (std::getline(infile, line))
    {
        std::string replacedLine = replaceLine(line, s1, s2);
        outfile << replacedLine << std::endl;  
    }
    return 0;
}