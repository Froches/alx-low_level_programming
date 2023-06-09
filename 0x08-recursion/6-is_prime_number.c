#include <stdio.h>

/**
 * is_prime_helper - function that checks for prime numbers
 * @n: integer to check
 * @divisor: the value used to check for divisibility
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_helper(int n, int divisor)
{
	if (n <= 1)
		return (0);

	if (divisor == 1)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - function that checks for prime numbers
 * @n: integer to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, n - 1));
}
