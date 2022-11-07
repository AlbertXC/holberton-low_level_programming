#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: 1st string.
 * @s2: 2nd string.
 * @n: Number of bytes.
 *
 * Return: Pointer to string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, ln1 = 0, ln2 = 0;
	char *n_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + ln1) != '\0')
		ln1++;
	while (*(s2 + ln2) != '\0')
		ln2++;
	if (n >= ln2)
		n = ln2;
	n_str = malloc(sizeof(char) * (ln1 + n +1));
	if (n_str == NULL)
		return (NULL);
	for (a = 0; a < ln1; a++)
		n_str[a] = s1[a];
	for (b = 0; b < n, a++, b++)
		n_str[a] = s2[b];
	n_str[a] = '\0';
	return (n_str);
}
