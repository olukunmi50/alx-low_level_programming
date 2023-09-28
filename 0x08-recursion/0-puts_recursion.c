#include "main.h"

/**
 *_puts_recursion - print a function like puts
 *@s: string that we need to print
 *
 *Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
