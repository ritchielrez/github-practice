#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

//std::string expression;
char op;
char num1Ch[5], num2Ch[5];
double num1I, num2I;

typedef struct 
{
    inline double add(double, double);
    inline double sub(double, double);
    inline double mul(double, double);
    inline double div(double, double);

} Calculator;

int main(int argc, char const *argv[])
{
    Calculator calculator;

    // printf("Enter your expression: \n");
    // std:getline(std::cin, expression);



    return 0;
}

inline double Calculator::add(double num1, double num2)
{
    return num1 + num2;
}

inline double Calculator::sub(double num1, double num2)
{
    return num1 - num2;
}

inline double Calculator::mul(double num1, double num2)
{
    return num1 * num2;
}

inline double Calculator::div(double num1, double num2)
{
     return num1 / num2;
}