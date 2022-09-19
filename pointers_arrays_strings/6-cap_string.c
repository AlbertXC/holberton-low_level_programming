#include "main.h"

/**
 * cap_string - Function that capitalizes all
 *				words of a string
 * @s: string to capitalize
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int a = 0, y;
	int sow[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + a) >= 97 && *(s + a) <= 122)
		*(s + a) = *(s + a) - 32;
	a++;
	while (*(s + a) != '\0')
	{
		for (y = 0; y < 13; y++)
		{
			if (*(s + a) == sow[y])
			{
				if ((*(s + (a + 1)) >= 97) && (*(s + (a + 1)) <= 122))
					*(s + (a + 1)) = *(s + (a + 1)) - 32;
				break;
			}
		}
		a++;
	}
	return (s);
}
