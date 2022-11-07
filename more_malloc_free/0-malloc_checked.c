#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: Allocated memory.
 *
 * Return: A pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
