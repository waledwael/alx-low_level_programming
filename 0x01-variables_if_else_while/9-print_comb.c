#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int a = 48;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
