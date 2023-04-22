#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: the number whose square root is to be found
 *
 * Return: the natural square root of the number
 */
/* Function prototypes */
int _sqrt_recursion(int n);
int _sqrt_helper(int n, int i, int j);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_helper(n, 1, n));
}

/**
 * _sqrt_helper - Recursive helper function to find the square root.
 * @n: The number to find the square root of.
 * @low: The lowest possible square root of n.
 * @high: The highest possible square root of n.
 *
 * Return: The natural square root of the number.
 */
int _sqrt_helper(int n, int low, int high)
{
	int mid;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;
	if (mid * mid == n)
		return (mid);
	else if (mid * mid > n)
		return (_sqrt_helper(n, low, mid - 1));
	else
		return (_sqrt_helper(n, mid + 1, high));
}
