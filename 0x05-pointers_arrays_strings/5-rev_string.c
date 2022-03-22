#include "main.h"

/**
 * rev_string - rEverse a string
 * @s: pointer to string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int sSize, j, k, temp;

	sSize = 0;

	while (s[sSize] != '\0')
	{
		sSize++;
	}

	k = 0;
	j = len - 1;
	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
