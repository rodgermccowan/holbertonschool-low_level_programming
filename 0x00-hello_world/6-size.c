#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	printf("\nSize of a char: %ld byte(s)", sizeof(char));
	printf("\nSize of a int: %ld byte(s)", sizeof(int));
	printf("\nSize of long int: %ld byte(s)", sizeof(long int));
	printf("\nSize of long long int: %ld byte(s)", sizeof(long long int));
	printf("\nSize of float: %ld byte(s)\n", sizeof(float));
	return (0);
}
