#include "holberton.h"
/**
* check_spec - checks if there's a valid format specifier
* @f: format spec after %
* Return: ptr to main function printf
*/
int (*check_spec(char f))(va_list)
{
	int i;
	fmt_t fmt_spec[] = {
		{'c', print_char},
		{'s', print_str},
		{'i', print_int},
		{'d', print_int},
		{'\0', NULL}
	};
	for (i = 0; fmt_spec[i].type != '\0'; i++)
	{
		if (fmt_spec[i].type == f)
		{
			return (fmt_spec[i].func);
		}
	}
	return (NULL);
}
