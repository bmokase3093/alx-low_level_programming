#include<stdio.h>
/**
 * main - Starting point
 * Description: Print fibonacci wiht 1 and 2
 * Return: 0
 */
int main(void)
{
	long int i, j = 1; k = 2, sum = 0;

	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", j);
		sum = j + k;
		j = k;
		k = sum;

		if (i == 48)
		{
			printf("%ld\n", j);
		}
	}
	return (0);
}
