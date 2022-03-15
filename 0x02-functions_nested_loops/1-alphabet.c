#include "main.h"
/**
 * main - starting point
 * Description: Function to print alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstvwxyz";
	int i = 0;

	while (i < 26)
	{
		_putchar(alphabet[i]);
		i++;
	}
	_putchar('\n');
}
