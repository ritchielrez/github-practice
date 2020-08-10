#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "easy.h"

//std::string expression;
char op;
char num1Ch[5], num2Ch[5];
double num1I, num2I;
int result;

// Function prototypes
void input(bool);
int calculate(void);

typedef struct
{
    inline void add(double, double);
    inline void sub(double, double);
    inline void mul(double, double);
    inline void div(double, double);

} Calculator;

// Structure variable
Calculator calculator;

int main(int argc, char const *argv[])
{
    // std:getline(std::cin, expression);

    // printf("%s %c %s", num1Ch, op, num2Ch);
    int i = 1;

    do 
    {
        if(i == 1)
        {
            input(true);
        }
        else 
        {
            input(false);
        }

        i++;
    } while(calculate());

    return 0;
}

inline void Calculator::add(double num1, double num2)
{
    result = num1 + num2;
    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
}

inline void Calculator::sub(double num1, double num2)
{
    result = num1 - num2;
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
}

inline void Calculator::mul(double num1, double num2)
{
    result = num1 * num2;
    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
}

inline void Calculator::div(double num1, double num2)
{
    result = num1 / num2;
    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
}

void input(bool FirstTimeOperation)
{
    if(FirstTimeOperation)
    {
        printf("Enter your expression: \n");
        scanf("%s %c %s", num1Ch, &op, num2Ch);
    }
    else
    {
        printf("Enter your expression: \n");
        scanf("%c %s", &op, num2Ch);   
    }
}

int calculate(void)
{
    num1I = atof(num1Ch);
    num2I = atof(num2Ch);

    if(GetAsyncKeyState(VK_ESCAPE))
    {
        return 0;
    }

    switch(op)
        {
            case '+':
                calculator.add(num1I, num2I);
                num1I = result;
                break;
            case '-':
                calculator.sub(num1I, num2I);
                num1I = result;
                break;
            case '*':
                calculator.mul(num1I, num2I);
                num1I = result;
                break;
            case '/':
                calculator.div(num1I, num2I);
                num1I = result;
                break;
            default:
                printf("Invalid operation. Try out again by keeping spaces between the numbers and the operator or type only 2 numbers and 1 operator.\n");
                calculate();
        }
    }
