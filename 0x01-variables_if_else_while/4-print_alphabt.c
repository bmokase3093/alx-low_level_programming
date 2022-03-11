#include <stdio.h>
/**
 *main - starting poing
 *Description: Print alphabets in lowercase except q and e
 *Return: 0 on success
 */
int main(void)
{
int firstLetter, n;
for (firstLetter = 97, n = 1; n < 27; firstLetter++, n++)
{
if (firstLetter == 101 || firstLetter == 113)
continue;
putchar(firstLetter);
}
putchar(10);
return (0);
}
