#include <stdio.h>
/**
 * main - lowercase alphabet in reverse
 *
 * Return: 0;
 */
int main(void)
{
	int letter = 'z';
	/* Print the lowercase alphabet in reverse using putchar */
	while (letter >= 'a')
	{
	putchar(letter);
	letter--;
	}
	putchar('\n');
	return (0);
}
