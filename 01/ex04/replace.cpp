
#include "replace.hpp"

std::string replaceLine(const std::string &line, const std::string &s1, const std::string &s2)
{
    std::string newLine;
    size_t start = 0;
    size_t pos;

    while (true)
    {
        pos = line.find(s1, start);
        if (pos == std::string::npos) // s1 not found
            break;
        newLine += line.substr(start, pos - start);
        newLine += s2;
        start = pos + s1.length();
    }
    newLine += line.substr(start);
    return newLine;
}