#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct funct - Helps in handling format specification
 * @spec: specifies what to do next
 * @func: function to do the task after
 */
typedef struct funct
{
	char *spec;
	int (*func)(va_list);
} mi_funct;

int _printf(const char *format, ...);
int (*form(char check))(va_list mine);
int print_char(va_list mine);
int print_str(va_list mine);
int print_per(va_list mine);
int print_int(va_list mine);
#endif
