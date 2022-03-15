#include<stdio.h>
/**
 * main - starting point
 * Description: sum of multples of 3 or 5
 * Return: 0
 */
int main(void)
{
	int sum, i;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
