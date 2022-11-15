#include "main.h"

/**
 * factorial - gets factorial of n
 * @n: the number to calculate the factorial
 *
 * return: integer value
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

	return (n * factorial(n - 1));

}
