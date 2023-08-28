#include "main.h"

/**
 * *_strchr - Entry point
 * @s: input pointer to put constant
 * @c: input constant
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');
}
