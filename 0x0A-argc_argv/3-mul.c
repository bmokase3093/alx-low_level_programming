#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to multiply two numbers
 * @argc: counter the number of arguments
 * @argv: pointer to string of array
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int mul = 1;
	int i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
