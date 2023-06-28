#include "main.h"
/**
 *form - will determine the functin t use accrding to the specs
 *@check: character to look for
 * Return: pointer to a functions that does the job
 */
int (*form(char check))(va_list)
{
	int i;

	mi_funct array[6] = {{"c", print_char},
		{"s", print_str},
		{"%", print_per},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}};

	for (i = 0; (array[i]).spec != NULL; i++)
	{
		if (*(array[i].spec) == check)
		{
			return ((array[i].func));
		}
	}
	return (NULL);
}
