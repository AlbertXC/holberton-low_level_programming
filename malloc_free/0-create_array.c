#include "main.h"

/**
 * create_array - Function that creates an array of chars,
 *				  and initializes it with a specific char.
 * @size: the size of the memory to print
 * @c: Beginning of the array
 *
 * Return: NULL if size = 0.
 *		   A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ca = malloc(sizeof(char) * size);
	unsigned int i;

	if (ca == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		ca[i] = c;
	return (ca);
}
