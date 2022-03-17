#include "main.h"
/**
 *print_line - prints a line 
 *@n: length of line.
 *Return: void.
 */
void print_line(int n)
{
	int c = 0;

	while ((c <  n) && (n > 0))
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
