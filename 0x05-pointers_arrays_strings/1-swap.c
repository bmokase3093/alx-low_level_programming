#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * @a: first parameter pointer
 * @b: second parameter pointer
 *
 * Return: 0
 */

vodi swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
