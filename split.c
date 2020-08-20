#include "holberton.h"

/**
  *split - function that splits a string
  *@line: pointer
  *Return: array
  */
char **split(char *line)
{
	char *token = strtok(line, " ");
	char **nest = malloc((sizeof(char *)) * (_strlen(line)));
	int i = 0;

	while (token != NULL)
	{
		nest[i] = token;
		i++;
		token = strtok(NULL, " ");
	}
	nest[i] = NULL;
	return (nest);
	free(nest);
}
