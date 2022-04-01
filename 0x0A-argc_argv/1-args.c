#include <stdio.h>
/**
 * main - print the number of arguments passed
 * @argc: count number of arguments
 * @argv: pointer to array of string to hold arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	for (i = 0; i < argc - 1; i++)
	{
	}

	printf("%d\n", i);
	return (0);
}
