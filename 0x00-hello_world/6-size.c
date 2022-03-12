#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of a int: %ld byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long: %ld byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
