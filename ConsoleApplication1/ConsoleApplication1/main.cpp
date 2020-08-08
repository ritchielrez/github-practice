// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>


int _tmain(int argc, char argv[])
{
	int num1, num2;

	scanf_s("%d %d", &num1, &num2); // Or use scanf() function instead of it. I use here scanf_s() function because of VS2012 build warnings.
	printf("%d + %d = %d\n", num1, num2, num1 + num2);

	//system("pause");
	return 0;
}

