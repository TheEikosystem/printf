#ifndef PRINT_H
#define PRINT_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
  * struct print - typedef for printing various type
  * @opt: type of print
  * @call_fun: function to print
  */
typedef struct format
{
	char *opt;
	int (*call_fun)(va_list);
} convert;

int _printf(const char *format, ...);
int set_flags(const char *format, int *i);

#endif 
