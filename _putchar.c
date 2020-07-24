#include "holberton.h"
/**
* _putchar - writes out a char input
* @c: char to write
* Return: write
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
