#include "main.h"

/**
 * clear_bit - clears the bit at the index
 * @n: the number to index
 * @index: the bit to clear
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1l << index)
		*n ^= 1l << index;
	return (1);
}
