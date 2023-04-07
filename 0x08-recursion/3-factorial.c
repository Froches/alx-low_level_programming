#include "main.h"

/**
 * factorial - returns a factorial of a given number
 * @n: the number to use in equation
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
