#include "main.h"

/**
 * factorial - calculate the factorial of a number
 * @n: number to be calculated
 * Return: (n * factorial(n - 1))
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
