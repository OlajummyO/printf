<<<<<<< HEAD
#ifndef _MAIN_H_
#define _MAIN_H_

=======
#ifndef MAIN_H
#define MAIN_H
>>>>>>> 4dbbcbaa1dcf00620de2da81908aef180405fb41
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
<<<<<<< HEAD

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

=======
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
>>>>>>> 4dbbcbaa1dcf00620de2da81908aef180405fb41
#endif
