#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: string to check for needle
 * @needle: substring to locates haystack
 *
 * Return: pointer to the beginning of the located
 *		   substring, NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b] == needle[b])
				b++;
			else
				break;
		}
		if (needle[b])
		{
			a++;
			b = 0;
		}
		else
			return (haystack + a);
	}
	return (0);
}
