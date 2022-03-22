#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array
 * @a: pointer to integer
 * @n: integer parameter
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf('\n');
}
