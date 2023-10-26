#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - print square root
 * @n: root of the number
 * Return: square root
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (_sqrt_recursion(n));
}
