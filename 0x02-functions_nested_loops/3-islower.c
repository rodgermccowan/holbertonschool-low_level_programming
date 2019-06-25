#include "holberton.h"

/**
 * _islower - checks for lowercase char
 * @c: int c
 * Return: 1 if c is lowercase and Return 0 otherwise
 */

int _islower(int c)
{

	if (c > 'a' && c <= 'z')
	{
		return (1);

	}
	else
	{
		return (0);

	}
}
