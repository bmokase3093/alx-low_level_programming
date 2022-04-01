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
	(void)argv;

	printf("%d\n", argc);
	return (0);
}
