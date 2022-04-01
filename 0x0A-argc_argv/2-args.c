#include <stdio.h>
/**
 * main - print all arguments it recives
 * @argc: count the number of arguments
 * @argv: pointer to array of string that artores arguments
 *
 * Return: 0 on succees
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
