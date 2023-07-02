#include "main.h"
#include <string.h>
/**
 * print_char - prints cahr to the stdoutput
 * @mine: what to print
 * Return: number of printed chracters
 */
int print_char(va_list mine)
{
	int printed;
	char temp;

	temp = (char)va_arg(mine, int);
	printed = write(1, &temp, 1);
	return (printed);
}
/**
 * print_str - prints a string given as an argument
 *@mine: string to print
 *Return: the printed characters
 */
int print_str(va_list mine)
{
	int printed, counter;
	char *cpy;

	printed = 0;
	cpy = va_arg(mine, char *);
	if (cpy == NULL)
		return (0);
	for (counter = 0; cpy[counter]; counter++)
		printed += write(1, &cpy[counter], 1);
	return (printed);
}
/**
 * print_per- prints a percentage sign
 *@mine: char t print
 * Return: printed number
 */
int print_per(va_list mine)
{
	int printed;
	char tmp;

	printed = 0;
	tmp = (char)va_arg(mine, int);

	tmp = '%';
	printed += write(1, &tmp, 1);
	return (printed);
}
/**
 * print_int - will bring out an int to the consile
 * @mine: int to print
 * Return: number of bytes to print
 */
int print_int(va_list mine)
{
	int printed;
	char tmp_arr[10];
	int tmp;

	printed = 0;
	tmp = (char)va_arg(mine, int);
	sprintf(tmp_arr, "%d", tmp);
	printed += write(STDOUT_FILENO, tmp_arr, strlen(tmp_arr));
	return (printed);
}

