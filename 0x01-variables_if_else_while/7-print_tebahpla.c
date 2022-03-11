#include <stdio.h>
/**
 *main - starting point
 *Description: Print lowercase slphabets in reverse
 *Return: 0 on success
 */
int main(void)
{
	int firstLetter, n;

	for (firstLetter = 122, n = 1; n < 27; firstLetter--, n++)
	{
		putchar(firstLetter);
	}
	putchar(10);
	return (0);
}
