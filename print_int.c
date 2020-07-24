#include "holberton.h"
/**
* get_int - recursive function to get int value
* @i: input int
* Return: counter
*/
int get_int(int i)
{
	int counter = 0;

	if (i == 0)
	{
		return (0);
	}
	if (i < 0)
	{
		_putchar('-');
		counter++;
		i = -i;
	}
	counter += get_int(i / 10);
	_putchar((i % 10) + '0');
	counter++;
	return (counter);
}

/**
* print_int - prints int
* @current_fmt: list of int to print
* Return: number of digits printed
*/
int print_int(va_list current_fmt)
{
	int counter;
	int i = va_arg(current_fmt, int);

	counter = get_int(i);
	return (counter);
}
