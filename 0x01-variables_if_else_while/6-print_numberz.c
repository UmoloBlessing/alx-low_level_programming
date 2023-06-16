#include <stdio.h>
/**
 * main - single digit numbers of base 10 starting from 0
 *
 * Return: 0;
 */
int main(void)
{
	int number;

	for (number = 9; number >= 0; number++)
		putchar(number + '0');

	putchar('\n');

	return (0);
}
