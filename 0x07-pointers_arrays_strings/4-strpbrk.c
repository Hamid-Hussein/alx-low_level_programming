 #include "main.h"

/**
 * _strpbrk - search for sets of bytes
 * @s: string to search from
 * @accept: string to search in
 * Return: accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		a++;
	}
	return (NULL);
}
