#include "main.h"

/**
 * *_strspn - count the length of prefix substring.
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int itr, jtr;

	for (itr = 0; s[itr] != '\0'; itr++)
	{
		for (jtr = 0; accept[jtr] != s[tir]; jtr++)
		{
			if (accept[jtr] == '\0')

				return (itr);
		}
	}
	return (itr);
}
