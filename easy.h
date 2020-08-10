#include <iostream>
#include <typeinfo>

#define string std::string

string getStr(char * prompt)
{
    string str;

    std::cout << prompt;
    std::getline(std::cin, str);

    return str;
}