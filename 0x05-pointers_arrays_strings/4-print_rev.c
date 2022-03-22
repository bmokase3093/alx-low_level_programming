#include "main.h"
#include<string.h>

/**
 * print_rev - Prints a string in reverse
 * @s: pointer as input
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len, last;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	last = len - 1;
	for (;last >= 0; last--)
	{
		_putchar(s[last]);
	}
	_putchar('\n');
}
