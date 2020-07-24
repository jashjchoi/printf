#include "holberton.h"
#include <stdio.h>
/**
* print_str - prints string
* @current_fmt: list of string to print
* Return: str counter, or null if str = NULL
*/
int print_str(va_list current_fmt)
{
	int counter = 0; 
	char *str;

	str = va_arg(current_fmt, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	/** printf("%s\n", str); **/
	while (str[counter])
	{
		_putchar(str[counter]);
		counter++;
	}
	return (counter);
}
