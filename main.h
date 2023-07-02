#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct func - struct for specifier to printer
 * @t: character to compare
 * @f: function to handle printing
 */
typedef struct func
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
int print_hex(va_list mine);
int print_oct(va_list mine);
int print_bin(va_list mine);
#endif
