#include "print.h"

/************************* PRINT REVERSE *************************/
/**
* handle_rev - A function that prints a string in reverse
* @r: string.
* Return: number of printed char.
*/
int handle_rev(va_list r)
{
	char *str;
	int i = 0, count = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	while (str[i])
		i++;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
/************************* PRINT A STRING IN ROT13 *************************/
/**
 * print_rot13string - the funtion that Print a string in rot13.
 * @buffer: a Pointer to struct buffer.
 * @args: the string to be converted to rot13 and printed
 * Return: Numbers of chars printed
 */
int print_rot13string(va_list args, char buffer)
{
	int i;
	char *str;

	char shift13[52] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
	'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	'l', 'm',
	'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
	'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	char letters[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
	'y', 'z',
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
	'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	str = va_arg(args, char *);

	while (*str)
	{
		for (i = 0; letters[i]; i++)
		{
			if (*str == letters[i])
			{
				*buffer.box = shift13[i];
				break;
			}
		}
		if (!letters[i])
			*buffer.box = *str;

		buffer.box++;
		buffer.size++;
		str++;
	}

	buffer.box--;
	return (buffer);
}
