#include "print.h"

/**
 * _precision - a function to calculate the precision
 * @format: Format.
 * @i: arguments to be printed.
 * @valist: list of arguments.
 * Return: Precision.
 */
int _precision(const char *format, int *i, va_list valist)
{
	int curr_i = *i + 1;
	int precision = -1;

	if (format[curr_i] != '.')
		return (precision);

	precision = 0;

	for (curr_i += 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			precision *= 10;
			precision += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			precision = va_arg(valist, int);
			break;
		}
		else
			break;
	}
	*i = curr_i - 1;
	return (precision);
}
