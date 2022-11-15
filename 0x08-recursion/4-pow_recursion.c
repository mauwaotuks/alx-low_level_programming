#include "main.h"

/**
 *_pow_recursion-raises x to the power of y
 *@x: base
 * @y: exposant
 * Return: on success 1.
 * on error, -1 is returned, and errno is set approprietely
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
