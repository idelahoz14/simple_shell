#include "holberton.h"
/**
 * main - shell project
 * Return: Always 0.
 */
int main(void)
{
	char *line = NULL;
	char **array = NULL;

	do {
		signal(SIGINT, CTRL_C);
		write(STDOUT_FILENO, "$ ", 2);
		line = read_line();
		if (line == NULL)
		{
			free(line);
			break;
		}
		if (!_strcmp(line, "exit"))
		{
			free(line);
			exit(EXIT_FAILURE);
		}
		if (!_strcmp(line, "env"))
		{
			environment(environ);
			free(line);
		}
		else
		{
		array = split(line);
		process(array);
		free(line);
		free(array);
		}
	} while (1);
	return (0);
}

/**
 * CTRL_C - function for Ctrl + C
 * @signal: int.
 * Return: nothing.
 */
void CTRL_C(int signal)
{
	(void)signal;
	write(STDOUT_FILENO, "\n", 1);
	write(STDOUT_FILENO, "$ ", 2);
}
