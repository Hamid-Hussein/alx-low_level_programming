 #include "main.h"

/**
 * _strpbrk - search for sets of bytes
 * @s: string to search from
 * @accept: string to search in
 * Return: accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0' && *accept != '\0')
	{
		if (*s == *accept)
			return (s);
		accept++;
	}
	return (NULL);
}
