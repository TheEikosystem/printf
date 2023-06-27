#include "print.h"
/**
 * print_width - Calculates the width for printing
 * @format: string format
 * @i: List of arguments
 * @valist: arguments.
 * Return: width.
 */
int print_width(const char *format, int *i, va_list valist)
{
	    int curr_i;
	    int width = 0;

	    for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	    {
		        if (is_digit(format[curr_i]))
		        {
			            width *= 10;
			            width += format[curr_i] - '0';
		        }
		  else if (format[curr_i] == '*')
		  {
			      curr_i++;
			      width = va_arg(valist, int);
			      break;
		  }
		  else
			break;
	    }
	    *i = curr_i - 1;
	    return (width);
}
