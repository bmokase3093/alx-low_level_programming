#include "main.h"
/**
 * _puts_recursion - prints a string followed by new line
 * @s: pointer to a string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\0');
	}
	_putchar(*s);
	_recursion(s + 1);
}
