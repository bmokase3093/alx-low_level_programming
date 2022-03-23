#include "main.h"

/**
 * cap_string - capitalize all words of string
 * @s: pointer to string
 *
 * Return: the string
 */
char *cap_string(char *s)
{
	int length, i;
	char separator[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (length = 0; s[length] != '\0'; length++)
	{
		if (length == 0 && s[length] >= 97 && s[length] <= 122)
		{
			s[length] -= 32;
		}
		for (i = 0; i < 13; i++)
		{
			if (s[length] == separator[i])
			{
				if (s[length + 1] >= 97 && s[length + 1] <= 122)
				{
					s[length + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
