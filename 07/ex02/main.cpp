#include <iostream>
#include <string>
#include "Array.hpp"

int main( void )
{
    std::cout << "<3<3<3 empty array <3<3<3" << std::endl;
    Array<int> empty;
    std::cout << "size: " << empty.size() << std::endl;

    std::cout << "<3<3<3 int array, n=5 <3<3<3" << std::endl;
    Array<int> intArr(5);
    for (unsigned int i = 0; i < intArr.size(); i++)
        intArr[i] = i * 10;
    for (unsigned int i = 0; i < intArr.size(); i++)
        std::cout << intArr[i] << std::endl;

    std::cout << "--- deep copy test ---" << std::endl;
    Array<int> copy(intArr);
    copy[0] = 999;
    std::cout << "original[0]: " << intArr[0] << std::endl; 
    std::cout << "copy[0]:     " << copy[0] << std::endl;  

    std::cout << "--- assignment test ---" << std::endl;
    Array<int> assigned;
    assigned = intArr;
    assigned[1] = 888;
    std::cout << "original[1]: " << intArr[1] << std::endl;
    std::cout << "assigned[1]: " << assigned[1] << std::endl; 

    std::cout << "<3<3<3 string array <3<3<3" << std::endl;
    Array<std::string> strArr(3);
    strArr[0] = "hello";
    strArr[1] = "world";
    strArr[2] = "42";
    for (unsigned int i = 0; i < strArr.size(); i++)
        std::cout << strArr[i] << std::endl;

    std::cout << "<3<3<3 out of bounds <3<3<3" << std::endl;
    try {
        std::cout << intArr[100] << std::endl;
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}