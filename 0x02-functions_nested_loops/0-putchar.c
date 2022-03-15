#include "main.h"
/**
 * main - starting point
 * Description: Program that prints _putchar
 * Return: 0
 */
int main(void)
{
	char text[7] = "_putchar";
	int i;

	while(i < 7)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
