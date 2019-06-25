#include "holberton.h"

/**
 * _abs - computes the absolute value
 * @c: int c
 * Return: 0
 */

int _abs(int c)
{
	if (c < 0)
		c = c * -1;

	return (c);

}
