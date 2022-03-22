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
	int slength;

	slength = strlen(*s);

	return (slength);
}
