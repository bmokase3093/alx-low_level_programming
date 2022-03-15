#include "main.h"
/**
 * _isalpha - check for alphabetic
 * @c: input to function
 * Description: check for lowercae and uppercase
 * Return: 1 if c is letter uper or lower
 * 0 otherwise
 */
int _islower(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
