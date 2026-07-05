
#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void print(T const &z)
{
    std::cout << z << std::endl;
}

template <typename T>
void increment(T &z)
{
    z++;
}

int main (void)
{
    std::cout << "<3<3<3 int array <3<3<3" << std::endl;
    int intArr[] = {1, 2, 3, 4, 5};
    iter(intArr, 5, print<int>);

    std::cout << "<3<3<3 string array <3<3<3" << std::endl;
    std::string strArr[] = {"chippeur", "arrête", "de", "chipper"};
    iter(strArr, 4, print<std::string>);

    std::cout << "<3<3<3 int array after increment <3<3<3" << std::endl;
    iter(intArr, 5, increment<int>);
    iter(intArr, 5, print<int>);

    std::cout << "<3<3<3 const int array <3<3<3" << std::endl;
    int const constArr[] = {10, 20, 30};
    iter(constArr, 3, print<int>);
    
    return 0;
}