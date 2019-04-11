//prompt user for password before running program
//NOTE: USING C++ 11 standard
#include <iostream>
#include <functional>
//#include <unordered_map>
#include <string>

int main()
{
    std::string password = "911769bc95abca818015cfd4c26d2601";

    std::hash<std::string> str_hash;

    std::cout << password << std::endl;
    std::cout << str_hash("ilovecybe366!") << std::endl;
}
