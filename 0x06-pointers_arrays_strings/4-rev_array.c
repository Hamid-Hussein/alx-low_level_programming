#include "main.h"

/**
 * reverse_array - reverse the content of an array to integers
 * @a: array name
 * @n: elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
