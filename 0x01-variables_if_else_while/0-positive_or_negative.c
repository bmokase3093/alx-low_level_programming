#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - starting point
 * Description: Program to assign a random number and print if its postive or negative
 * Return: value 0 on success
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n<0)
	{
		printf("%d is negative\n", n);
	
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
