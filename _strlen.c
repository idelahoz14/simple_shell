#include "holberton.h"
/**
 *_strlen - returns the lenght of a string
 *@s: test variable
 *
 *Return: lenght of string s
 */
int _strlen(char *s)
{
	int i, lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		lenght++;
	}

	return (lenght);
}
