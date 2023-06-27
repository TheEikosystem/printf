#include "print.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/************************* PRINT CHAR *************************/

/**
 * handle_char - handle character formats
 * @c: variable list for %c format
 * Return: return 1
 */
int handle_char(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);

	return (1);
}
/************************* PRINT A STRING *************************/
/**
 * set_str - handles string format
 * @s: variable list for %s format
 * Return: return 1 if true and 0 if not
 */

int set_str(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/************************* PRINT PERCENT SIGN *************************/
/**
* print_percent - Prints a percent symbol
* @valist: list of arguments
* Return: Will return the amount of characters printed.
*/
int print_percent(__attribute__((unused))va_list valist)
{
	_putchar('%');
	return (1);
}

/************************* PRINT INT *************************/
/**
 * set_int - a function to print integers
 * @i: input
 * Return: return the no of counts.
 */

int set_int(va_list i)
{
	int p[10];
	int x = 1, power = 100000000, j, sum = 0, count = 0;

	j = va_arg(i, int);
	if (j < 0)
	{
		j *= -1;
		_putchar('-');
		count++;
	}
	p[0] = j / power;

	while (x < 10)
	{
		power /= 10;
		p[x] = (j / power) % 10;
		x++;
	}
	for (x = 0; x < 10; x++)
	{
		sum += p[x];
		if (sum != 0 || x == 9)
		{
			_putchar('0' + p[x]);
			count++;
		}
	}
	return (count);
}

/************************* PRINT BINARY *************************/
/**
 * get_binary - Prints an unsigned number
 * @b: unsigned in to print
 * Return: Numbers of char printed.
 */
int get_binary(va_list b)
{
	unsigned int n, m = 2147483648, j = 1, sum = 0;
	unsigned int a[32];
	int count = 0;

	n = va_arg(b, unsigned int);
	a[0] = n / m;

	for (; j < 32; j++)
	{
		m /= 2;
		a[j] = (n / m) % 2;
	}
	for (j = 0; j < 32; j++)
	{
		sum += a[j];
		if (sum || j == 31)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}
	return (count);
}
