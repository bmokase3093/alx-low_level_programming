#include "main.h"
/**
 * main - starting point
 * Description: Program that prints _putchar
 * Return: 0
 */
int main(void)
{
	char text[8] = "_putchar";
	int i = 0;

	while(i < 8)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
