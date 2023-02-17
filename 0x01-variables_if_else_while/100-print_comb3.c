#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int a = 48;

	int  b = 48;

	while (a <= 57)
	{
		while (b <= 57)
		{
			if (a >= b)
			{
				b++;
				continue;
			}
			putchar(a);
			putchar(b);
			if (a < 56)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
		b = 48;
	}
	putchar('\n');
	return (0);
}
