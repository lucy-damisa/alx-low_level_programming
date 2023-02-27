#include "main.h"
/**
  * int add - This function takes two integers as arguments and returns their sum.
  * Return: result
  **/
int add(int a, int b)
{
	int result = a + b;
	if (result < 0)
    {
	    putchar('-');
	    result = -result;
    }
	if (result > 9)
    {
	    add(result / 10, 0);
    }
	putchar (result % 10 + '0');
	return (result);
}

