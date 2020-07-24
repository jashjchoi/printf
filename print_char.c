#include "holberton.h"
/**
* print_char - prints character
* @current_fmt: list of character to print
* Return: always 1
*/
int print_char(va_list current_fmt)
{
	char ch = va_arg(current_fmt, int);

	_putchar(ch);
	return (1);
}
