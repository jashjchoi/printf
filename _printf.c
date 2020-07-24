#include "holberton.h"
/**
* _printf - prints input according to valid format
* @format: list of format types passed into the function
* Return: number of char printed
*/
int _printf(const char *format, ...)
{
	int i;
	int counter = 0;
	va_list current_fmt;
	int (*func)(va_list);

	if (format == NULL)
	{
		return (-1);
	}
	va_start(current_fmt, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				counter++;
				i++;
			}
			else
			{
				func = check_spec(format[i]);
				counter += func(current_fmt);
			}
		}
		else
		{
			_putchar(format[i]);
			counter++;
		}
	}
	va_end(current_fmt);
	return (counter);
}
