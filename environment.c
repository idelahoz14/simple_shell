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
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (0);
}
