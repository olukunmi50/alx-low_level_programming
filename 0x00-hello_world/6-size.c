#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 (success)
 */
int main(void)
{printf("Size of char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu bytes(s)\n", sizeof(float));
return (0);
}
