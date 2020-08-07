#include <stdio.h>

void greetings(char name[])
{
    printf("Welcome, %s!!!", name);
}

double sqaure(double num)
{
    return num * num;
}

int main()
{
    printf("Vscode is awesome!!!");
    greetings("Git");
    sqaure(2.53);
    return 0;
}