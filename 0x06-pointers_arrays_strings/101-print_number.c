#include "main.h"
/**
 * print_number - print an integer
 * @n: integer parameter
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)/*Check if number is negative*/
	{
		_putchar(45);
		num = -n;
	}
	/*Pirnt number*/
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');

}
