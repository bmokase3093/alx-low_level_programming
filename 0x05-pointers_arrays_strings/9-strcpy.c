#include "main.h"

/**
 * _strcpy - copy string at the end of another string including null character
 * @dest: pointer to string  to be copied
 * @src: pointer to string to be copied
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
