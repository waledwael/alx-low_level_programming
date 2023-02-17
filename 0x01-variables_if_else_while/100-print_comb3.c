#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	char a = '0';

	char b = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			if (a >= b)
			{
				b++;
				continue;
			}
			putchar(a);
			putchar(b);
			if (a < '9')
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
		b = 0;
	}
	putchar('\n');
	return (0);
}
