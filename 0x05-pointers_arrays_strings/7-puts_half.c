#include "main.h"

/**
 * puts_half - Prints half of the string
 * @str: pointer to a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int n, len, half;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		half = len / 2;
		for (n = half; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		half = (len - 1) / 2;
		for (n = half + 1; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
