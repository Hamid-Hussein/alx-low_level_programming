#include "main.h"

/**
 * _atoi - convert string to an integer
 * @s: string to be converted
 * Return: 0
 */

int _atoi(char *s)
{
	s = "hello world";
	int i = atoi(s);

	printf("integer: %d\n", i);
	return (0);
}
