#include <stdio.h>
/**
 *main - starting point
 *@void: no arguments
 *Description: Print alphabet in lowercas then uppercase
 *Return: 0 on success
 */
int main(void)
{
	int firstSLetter, firstCletter, n;
	for (firstSLetter = 97, n = 1; n < 27; firstSLetter++, n++)
	{
	putchar(firstSLetter);
	}
	for (firstCletter = 65, n = 1; n < 27; firstCletter++, n++)
	{
		putchar(firstCletter);
	}
	putchar(10);
	return (0);
}
