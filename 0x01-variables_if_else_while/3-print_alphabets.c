#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i = 'a';
	int j = 'A';

	while (i <= 'z')
	{
		putchar (i);
		i++;
	}

	while (j <= 'Z')
	{
		putchar (j);
		j++;
	}

	putchar('\n');
	return (0);
}
