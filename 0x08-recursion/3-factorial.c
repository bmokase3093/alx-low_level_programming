#include "main.h"
/**
 * factorial - Function to return a factoral of a number
 * @n: input integer to the factior param
 *
 * Return: if n is lower than 0 then return -1 to indicate error
 * otherwise return a factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
