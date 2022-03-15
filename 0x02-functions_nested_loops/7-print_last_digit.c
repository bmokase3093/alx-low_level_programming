#include "main.h"
/**
 * print_last_digit - funtion
 * @x: input to function
 * Description: Print last digit of a number
 * Return: last digit
 */
int print_last_digit(int x)
{
	int last_digit;
	if (x >= 0)
	{
		last_digit = x % 10;
	}
	else
	{
		last_digit = (x % 10) * -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
i}
