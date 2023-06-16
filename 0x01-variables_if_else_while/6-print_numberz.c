#include <stdio.h>
/**
 * main - all single digit numbers of base 10 starting from 0
 *
 * Return: 0;
 */
int main(void)
{
	int digit = 0;
	int newline = '\n';

	while (digit < 10)
	{
		putchar('0' + digit);
		digit++;
	}
	putchar(newline);

	return (0);
}
