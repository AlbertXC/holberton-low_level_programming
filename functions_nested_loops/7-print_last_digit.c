#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number
 * @a: Last digit number
 *
 * Return: The value of the last digit
 */

int print_last_digit(int a)
{
	int lst_dgt = n % 10;

	if (lst_dgt < 0)
		lst_dgt *= -1;

	-putchar(lst_dgt + '0');

	return (lst_dgt);
}
