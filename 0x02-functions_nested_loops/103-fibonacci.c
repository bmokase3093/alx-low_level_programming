#include<stdio.h>
/**
 * main - starting point of program
 * Description: Find and print sum of
 * Return: 0
 */
int main(void)
{
	long int i, x = 1, y = 2, sum = 0, evenSum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			evenSum = evenSum + y;
		}
		sum = x + y;
		y = sum;
	}
	printf("%ld\n", evenSum);
	return (0);
}
