#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
* struct get_func - struct for printf function
* @type: format type to print
* @func: pointer to printf function
*
* Description: stuct stores pointer to printf function
*/

typedef struct get_func
{
	char type;
	int (*func)(va_list current_fmt);
} fmt_t;

int _printf(const char *format, ...);
int _putchar(char c);
int (*check_spec(char f))(va_list current_fmt);

int print_char(va_list);
int print_str(va_list);
int print_int(va_list);

#endif /** _HOLBERTON_H_ **/
