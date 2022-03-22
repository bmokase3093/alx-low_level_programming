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
	int i, len, temp;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	_putchar(temp);
	_putchar('\n');
}
