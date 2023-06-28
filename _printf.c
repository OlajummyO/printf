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
