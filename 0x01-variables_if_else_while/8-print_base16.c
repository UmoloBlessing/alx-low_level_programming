#include <stdio.h>

/**
 * main - all the numbers of base 16 in lowercase
 *
 * Return: 0;
 */
int main(void)
{
	int digit;
	char lowercase;

	for (digit = 0; digit < 10; digit++)
	{
		lowercase = '0' + digit;
		putchar(lowercase);
	}

	for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
	{
		putchar(lowercase);
	}

	putchar('\n');

	return (0);
}
