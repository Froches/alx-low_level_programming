#include <math.h>
#include "main.h"

/**
 *_sqrt_recursion - returns natural square root of a number
 *@n: parameter
 *Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	float result;

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	result = _sqrt_recursion(n / 2);

	while (fabs(result * result - n) > 0.001)
		result = (result + n / result) / 2;

	return ((int) result);
}
