#include "main.h"
#include<string.h>

/**
 * _strlen - function to return the length of string
 * @s: character pointer
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int slength = 0;

	while (*s != '\0')
	{
		slength++;
		s++;
	}
}
