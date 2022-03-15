#include "main.h"
/**
 * _abs - function to compute abs
 * @x: input to function
 * Description: Compute abs value of integer
 * Return: 0
 */
int _abs(int x)
{
	if (x > 0)
	{
		x = x * 1;
	}
	else if (x == 0)
	{
		x = 0;
	}
	else
	{
		x = x * -1;
	}
	return (x);
}
