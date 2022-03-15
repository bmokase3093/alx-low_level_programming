#include<stdio.h>
/**
 * main - starting point of program
 * Description: Find and print sum of
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, evenSum = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
	return (0);
}
