#include <math.h>
#include "main.h"

/**
 * sqrt_helper - helper function to calculate the square root
 * @n: the number whose square root is to be calculated
 * @guess: the current guess for the square root
 * Return: the natural square root or -1 if n does not have a square root
 */

int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (sqrt_helper(n, guess + 1));
}

/**
 *_sqrt_recursion - returns natural square root of a number
 *@n: the number whose square root is to be calculated
 *Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 0));
}
