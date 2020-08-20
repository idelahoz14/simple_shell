#include "holberton.h"
/**
 * main - shell project
 * Return: Always 0.
 */
int main(void)
{
	char *line;
	char **array;

	do {
		signal(SIGINT, CTRL_C);
		write(STDOUT_FILENO, "$ ", 2);
		line = read_line();
		if (line == NULL)
		{
			free(line);
			break;
		}
		if (line[0] != '\n')
		{
			if (!_strcmp(line, "exit"))
			{
				free(line);
				exit(EXIT_FAILURE);
			}
			if (!_strcmp(line, "env"))
			{
				environment(environ);
			}
			else
			{
				array = split(line);
				if (*array == NULL)
				{
					free(line);
					free(array);
					continue;
				}
				process(array);
				free(array);
			}
		}
		free(line);
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
