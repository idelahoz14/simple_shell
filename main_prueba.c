#include "holberton.h"
/**
 * main - shell project
 * Return: Always 0.
 */

int main(void)
{
	char *line;
	char **array;

	do{
		printf("$ ");
		line = read_line();
		if (!_strcmp(line, "exit"))
		{
			free(line);
			exit(EXIT_FAILURE);
		}
		if (!_strcmp(line, "env"))
		{
			environment(environ);
		}
		array = split(line);
		process(array);
	}while(1);
	return (0);
}
