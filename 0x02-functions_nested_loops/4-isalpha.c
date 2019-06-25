#include "holberton.h"

/**
 * _isalpha - checks for uppercase char
 * @c: int c
 * Return: 1 if c is lowercase or uppercase and Return 0 otherwise
 */

int _isalpha(int c)
{

	if (c > 'a' && c <= 'z')
	{
		return (1);

	}
	else if (c > 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
