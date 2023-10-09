#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int f;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 9 ; j++)
		{
			for (k = j + 1 ; k <= 9 ; k++)
			{
				for (f = k + 1 ; f <= 9 ; f++)
				{
					putchar(i + '0');
				putchar(j + '0');
				putchar(' ');
				putchar(k + '0');
				putchar(f + '0');
				if (i == 7 && j == 8 && k == 9 && f == 9)
					break;
				putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
