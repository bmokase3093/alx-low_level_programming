#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to an integer
 * @n: integr
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int first, last, temp;

	for (first = 0, last = n - 1; first < last; first++, last--)
	{
		temp = a[first];
		a[first] = a[last];
		a[last] = temp;
	}
}
