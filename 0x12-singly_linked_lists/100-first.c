#include "lists.h"

void _consteuctor(void) __attribute__ ((constructor));

/**
 * _constructor - execute before main function
 * Return: void
 */

void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
