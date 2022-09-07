#include "main.h"

/**
 * _atoi - Function that convert a string
 *		   to an integer
 * @s:	String to convert
 *
 * Return: Return of a value
 */

int _atoi(char *s)
{
	int w, x, y, z;

	w = y = 0;
	z = 1;

	while ((*(s + 1) < '0' || *(s + w) > '9') && (*(s + 1) != '\0'))
	{
		if (*(s + w) == '-')
			z *= -1;
		w++;
	}
	x = w;
	while ((*(s + x) >= '0') && (*(s + x) <= '9'))
	{
		y = y * 10 + z * (*(s + x) - '0');
		x++;
	}
	return (y);
}
