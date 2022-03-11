#include<stdio.h>
/**
 * main - starting point
 * Description: Program to print something to the standard error.
 * Return: value 1 on success.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
