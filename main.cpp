#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

//std::string expression;
char op;
char firstnumCh[5], secondnumCh[5];
double firstnumI, secondnumI;

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
