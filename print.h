#ifndef PRINT_H
#define PRINT_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#define S_LONG
#define S_SHORT
#define F_MINUS
#define F_PLUS
#define F_ZERO
#define F_HASH
#define F_SPACE
#define UNUSED(x) (void)(x)

/**
  * struct format - typedef for printing various type
  * @opt: type of print
  * @call_fun: function to print
  */
typedef struct format
{
	char *opt;
	int (*call_fun)(va_list);
} format_t;

int _printf(const char *format, ...);
int set_flags(const char *format, int *i);
int _putchar(char c);
int decimal(va_list list);
int length_of_integer(int n);
int _precision(const char *format, int *i, va_list valist);
int handle_char(va_list c);
int set_str(va_list s);
int print_percent(__attribute__((unused))va_list valist);
int set_int(va_list i);
int get_binary(va_list b);
int handle_rev(va_list r);
int get_rot13string(va_list args, char buffer);
int p_size(const char *format, int *i);
int print_width(const char *format, int *i, va_list valist);

#endif
