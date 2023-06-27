#include "print.h"
/**
* decimal- function that returns an int to a signed decimal
* @list: arguments passed
* Return: length of integers..
*/
int decimal(va_list list)
{
	int i;

	i = va_arg(list, int);
	return (length_of_integer(i));
}

/**
* length_of_integer - prints a function that returns an int to a signed decimal
* @n: integer
* Return: length of the integer
*/
int length_of_integer(int n)
{
	if (n < 0)
	{
		return (1 + length_of_integer(-n));
	}
	else if (n < 10)
	{
		return (1);
	}
	else
	{
		return (1 + length_of_integer(n / 10));
	}
}
