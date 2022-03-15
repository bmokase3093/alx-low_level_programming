#include "main.h"
/**
 * print_sign - print a sign of a number
 * @n: input to function
 * Description: Print a sign
 * Return: 1 and print + if n > 0
 * Return: 0 and print 0 if n is 0
 * Return: -1 and print - if n < 0
 */
int print_sign(int)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else
	{
		result = -1;
		_putchar('-');
	}
	return (result);
}
