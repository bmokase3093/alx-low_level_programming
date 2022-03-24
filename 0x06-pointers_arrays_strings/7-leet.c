#include "main.h"

/**
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: pointer to string
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	int strCount, leetCount;
	char leetL [] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	/* Scan the string */
	strCount = 0;
	while (s[strCount] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetL[leetCount] == s[strCount])
			{
				s[strCount] = leetNums[leetCount];
			}
			leetCount++;
		}
		strCount++;
	}
	return (s);
}
