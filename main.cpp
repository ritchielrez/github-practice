#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

//std::string expression;
char op;
char num1Ch[5], num2Ch[5];
double num1I, num2I;

// Function prototypes
void input(void);
void calculate(void);

typedef struct 
{
    inline double add(double, double);
    inline double sub(double, double);
    inline double mul(double, double);
    inline double div(double, double);

} Calculator;

// Structure variable
Calculator calculator;

int main(int argc, char const *argv[])
{
    // std:getline(std::cin, expression);

    // printf("%s %c %s", num1Ch, op, num2Ch);

    calculate();

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

void input(void)
{
  printf("Enter your expression: \n");
  scanf("%s %c %s", num1Ch, &op, num2Ch);
}

void calculate(void)
{
  input();

  num1I = atof(num1Ch);
  num2I = atof(num2Ch);

  switch(op)
    {
        case '+':
            calculator.add(num1I, num2I);
            break;
        case '-':
            calculator.sub(num1I, num2I);
            break;
        case '*':
            calculator.mul(num1I, num2I);
            break;
        case '/':
            calculator.div(num1I, num2I);
            break;
        default:
            printf("Invalid operation. Try out again by keeping spaces between the numbers and the operator or type only 2 numbers and 1 operator.\n");
            calculate();
    }
}
