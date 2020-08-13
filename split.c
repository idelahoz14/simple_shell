#include "holberton.h"

/**
  *split - function that splits a string
  *@line: pointer
  *Return: array
  */
char **split(char *line)
{
	char *token = strtok(line, " ");
	char **nest = malloc((sizeof(char *)) * (1024));
	int i = 0;

	nest[i] = token;
	i++;

	while (token != NULL)
	{
		nest[i] = token;
		i++;
		token = strtok(NULL, " ");
	}
	nest[i] = NULL;
	return (nest);
}
