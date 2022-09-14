#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Difference between string 1 & string 2
 */

int _strcmp(char *s1, char *s2)
{
	int z = 0;

	while (*(s1 + z) && *(s2 + z) && (*(s1 + z) == *(s2 + z)))
		z++;
	return (*(s1 + z) - *(s2 + z));
}
