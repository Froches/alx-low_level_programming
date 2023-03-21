#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */


/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", m, n);
	else if (m == 0)
		printf("Last digit of %d is %d and is zero", m, n);
	else if (m < 6 && 1 > 0)
		printf("Lasts digit of %d is %d and is less than 6 and not 0", m, n);
	printf("\n");
	return (0);
}
