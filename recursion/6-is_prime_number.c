#include "main.h"

/**
 * is_prime - Function that returns
 * @s: input integer
 * @t: prime number to be
 *
 * Return: 1 if prime, 0 if not prime
 */

int is_prime(int s, int t)
{
	if (t < 2 || t % s == 0)
		return (0);
	else if (s > t / 2)
		return (1);
	else
		return (is_prime(s + 1, t));
}

/**
 * is_prime_number - establish if prime number
 * @n: input integer
 *
 * Return: 1 if prime, 0 if not prime
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}
