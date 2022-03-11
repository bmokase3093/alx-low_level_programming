#include <stdio.h>
/**
 *main - starting point
 *Description: Print numbers of base 16 in lowercase
 *Return: 0 on success
 */
int main(void)
{
	int num, hexletter, n;

	for (num = 48, n = 0; n < 10; num++, n++)
	{
		putchar(num);
	}
	for (hexletter = 97, n = 1; n < 7; hexletter++, n++)
	{
		putchar(hexletter);
	}
	putchar(10);
	return (0);
}
