#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character found
 *
 * Return: a pointer to firs occurance of character c in string s
 * or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	char *p;
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == c)
		{
			p = &s[counter];
			break;
		}
	}
	if (s[counter] == c)
	{
		p = &s[counter];
	}
	return (p);
}
