#include <iostream>
#include <typeinfo>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "windows.h"

#define string std::string

string getStr(char * prompt)
{
    string str;

    std::cout << prompt;
    std::getline(std::cin, str);

    return str;
}