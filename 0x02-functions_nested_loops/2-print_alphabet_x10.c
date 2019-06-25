#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10xs in lower
 *
 */
void print_alphabet_x10(void)
{
	char x;
	int count;

	for (count = 0; count <= 10; count++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{

			_putchar(x);

		}
		_putchar('\n');
	}
}
