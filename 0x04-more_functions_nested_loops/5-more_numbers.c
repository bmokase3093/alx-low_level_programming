#include "main.h"
/**
 * more_numbers - print 10 times 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		while (j < 15)
		{
			_putchar('0' + j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
