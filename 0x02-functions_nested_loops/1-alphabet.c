#include "main.h"
/**
 * print_alphabet - Prints lowercase alphabets
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
