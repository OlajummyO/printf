#include "main.h"
#include <unistd.h>

/* 
 * print_char - write a character to standout (stdout)
 * @args: variadic parameter
 *
 * Return: the number of character printed
 */

int print_char(va_list args)
{
	char c = va_arg(arg, char);
	int count = 0;

	if (c)
	{
		count =write(1, &c, 1);
		return (count);
	}


}
