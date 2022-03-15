/**
 * times_table - Prints 9 times table
 * @void: no parameters
 * Description: Prints 9 times table
 */
void times_table(void)
{
	int  m, n, p;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			p = m * n;
			if (n == 0)
				_putchar(p + '0');
			else
			{
				if (p < 10)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(p + '0');
				}
				else
				{
					_putchar(',');
					_putchar(32);
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
