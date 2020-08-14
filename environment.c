#include "holberton.h"

/**
 *environment - prints the environment.
 *@env: double pointer
 * Return: Always 0.
 */
int environment(char **env)
{
	unsigned int i;

	i = 0;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	return (0);
}
