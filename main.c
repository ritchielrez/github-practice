#include <stdio.h>

void greetings(char name[])
{
    printf("Welcome, %s!!!", name);
}

int main()
{
    printf("Vscode is awesome!!!");
    greetings("Git");
    return 0;
}