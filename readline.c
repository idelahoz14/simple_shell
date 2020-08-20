#include "holberton.h"

/**
  *read_line -  functions that reads the line
  *Return: line
  */
char *read_line()
{
	char *line = NULL;
	size_t size = 0;
	int i;

	i = getline(&line, &size, stdin);

	if (i == EOF)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
