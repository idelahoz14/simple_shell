#include "holberton.h"

/**
  *read_line -  functions that reads the line
  *Return: line
  */
char *read_line()
{
	char *line = NULL;
	size_t size = 0;
	int i = 0;

	i = getline(&line, &size, stdin);

	if (i == EOF)
	{
		free(line);
		return (NULL);
	}
	line[size] = '\0';
	return (line);
	free(line);
}
