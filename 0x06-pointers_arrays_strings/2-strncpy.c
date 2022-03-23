#include "main.h"

/**
 * _strncpy - a functions that copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be used
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int countBytes;

	for (countBytes = 0; countBytes < n && src[countBytes] != '\0'; countBytes++)
	{
		dest[countBytes] = src[countBytes];
		for (; countBytes < n; countBytes++)
		{
			dest[countBytes] = '\0';
		}
	}
	return (dest);
}
