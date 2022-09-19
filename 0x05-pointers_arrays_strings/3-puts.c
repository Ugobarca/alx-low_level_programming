#include "main.h"

/**
 * _puts - writes the string to the command line
 * followed by the new line character
 * @str: pointer referencing the memory address where
 * the string is stored in form of an array
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
