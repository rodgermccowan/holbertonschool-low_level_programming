#include "holberton.h"

/**
 * print_last_digit - prints only the last digit of a number
 * @r: int r
 * Return: int
 */

int print_last_digit(int r)
{
	int c;

	if (r < 0)
		r *= -1;
	c = r  % 10;
	_putchar ('0' + c);
	return (c);
}

