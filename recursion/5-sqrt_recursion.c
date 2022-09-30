#include "main.h"

/**
 * sqrt_check - Function that returns the natural
 *				square root of a number
 * @p: a number
 * @q: find sqrt
 *
 * Return: -1 or a sqrt root of a number
 */

int sqrt_check(int p, int q)
{
	if (p * p == q)
		return (p);
	if (p * p > q)
		return (-1);
	return (sqrt_check(p + 1, q));
}

/**
 * _sqrt_recursion - Function that returns the natural
 *					 square root of a number
 * @n: a number to find sqrt
 *
 * Return: -1 or a sqrt root of a number
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
