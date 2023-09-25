#include "main.h"

/**
 * _strchr - function that locate a character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
