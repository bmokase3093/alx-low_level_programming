#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: pointer to string
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	int index, index2;
	unsigned int result;
	int sign = 1;
	char now;

	index = 0;
	result = 0;
	while (*(s + index) != '\0')
	{
		now = *(s + index);
		if (now == '-')
		{
			sign *= -1;
		}
		if (now >= '0' && now <= '9')
		{
			index2 = index;
			while (*(s + index2) > 47 && *(s + index2) < 58)
			{
				result = (result * 10) + *(s + index2) - '0';
				index2++;
			}
			break;
		}
		index++;
	}
	if (sign < 0)
	{
		result *= sign;
	}
	return (result);
}
