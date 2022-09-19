#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 * @s: string to encode
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int e, f;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (e = 0; *(s + e); e++)
	{
		for (f = 0; f <= 9; f++)
		{
			if (a[f] == *(s + e))
				*(s + e) = b[f];
		}
	}
	return (s);
}
