#include "main.h"
#include<stdio.h>

/**
 * _memset - fills memory with constant bytes
 * fills the  first n bytes of memeory area pointed to by s with
 * the constant byte b
 * @s: pointer to memory byte
 * @b: constant to fill memory with
 * @n: bytes of memory area to be filled.
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
