#include <stdio.h>
/**
 *main - starting point
 *Description: Print all single digits numbers
 *Return: 0 on success
 */
int main(void)
{
	int num, i;

	for (num = 48, i = 0; i < 10; num++, i++)
	{
		putchar(num);
	}
	putchar(10);
	return (0);
}
