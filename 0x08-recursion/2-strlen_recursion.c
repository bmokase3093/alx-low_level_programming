#include "main.h"
/**
 * _strlen_recursion - returns the length of string
 * @s: pointer to a string
 *
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
