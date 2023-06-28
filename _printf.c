<<<<<<< HEAD
#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*check_specifier(const char*))(va_list);

/**
 * struct func - struct for specifier to printer
 * @t: character to compare
 * @f: function to handle printing
 */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);
int print_int(va_list);
int print_dec(va_list);

#endif
=======
#include "main.h"
/**
 * _printf - will print string passed to it
 * @format: string passed on to print
 * Return: the number of printed strings
 */
int _printf(const char *format, ...)
{
	int counter, printed;
	va_list mine;
	int (*tmp)(va_list);

	va_start(mine, format);
	printed = 0;
	if (format == NULL)
		return (-1);
	for (counter = 0; format[counter]; counter++)
	{
		if (format[counter] != '%')
		{
			printed += write(1, &format[counter], 1);
			continue;
		}
		if (format[counter] == '%')
		{
			tmp = form(format[counter + 1]);
			if (tmp != NULL)
			{
				printed += tmp(mine);
				counter++;
				continue;
			}
			if (format[counter + 1] == '\0')
				break;
			if (format[counter + 1] != '\0')
			{
				printed += write(1, &format[counter], 1);
				counter++;
				continue;
			}
		}
	}
	return (printed);
}
>>>>>>> 4dbbcbaa1dcf00620de2da81908aef180405fb41
