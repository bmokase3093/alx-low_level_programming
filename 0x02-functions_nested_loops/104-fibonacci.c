#include<stdio.h>
/**
 * main -starting point
 * Description: Print first 98 fibonacci
 * Return: 0
 */
int main(void)
{
	long int i, x = 1, y = 2, sum = 0;

	for (i = 0; i < 97; i++)
	{
		printf("%ld, ", x);
		sum = x + y;
		x = y;
		y = sum;

		if (i == 96)
		{
			printf("%ld\n", x);
		}
	}
	return (0);
}
