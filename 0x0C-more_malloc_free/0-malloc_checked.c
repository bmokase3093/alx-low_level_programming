#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memoery to be allocated
 *
 * Return: pointer to allocatd memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
