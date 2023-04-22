#include <stdio.h>
#include "main.h"
int is_prime_helper(int n, int div);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - helper function for is_prime_number
 * @n: the number to check
 * @div: the current divisor to test
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_helper(int n, int div)
{
	if (div >= n)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime_helper(n, div + 1));
}
