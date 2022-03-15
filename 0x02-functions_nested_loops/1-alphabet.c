#include "main.h"
/**
 * main - starting point
 * Description: print lowercase alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		_putchar(alphabet[i]);
		i++;
	}
	_putchar('\n');
}
