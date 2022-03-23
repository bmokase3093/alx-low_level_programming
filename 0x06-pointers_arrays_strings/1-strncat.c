#include "main.h"

/**
 * _strncat - Concatenates two strings. It will use
 * at most n bytes from src. Src does not need to be null terminated.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
