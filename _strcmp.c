#include "holberton.h"
/**
 *_strcmp - compares two strings
 *@s1: string 1
 *@s2: string 2
 *
 *Return: negative difference if s1 is less than s2, positive
 *difference if s1 is greater than s2, or 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
