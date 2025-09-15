
#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

bool    parseArgs(int argc, char **argv, std::string &filename, std::string &s1, std::string &s2);
bool    parseFile(const std::string &filename);
std::string replaceLine(const std::string &line, const std::string &s1, const std::string &s2);

#endif
