#include "main.h"

/**
 * is_prime_number - print prime numbers
 * @n: number to be printed
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int i;

	for (i = 0; i <= 7; i++)
	{
		if (n % i == 0)
			return (0);
		else
			return (1);
	}
	return (is_prime_number(n));
}
