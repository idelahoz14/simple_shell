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
		signal(SIGINT, CTRL_C);
		write(STDOUT_FILENO, "$ ", 2);
		line = read_line();
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
		}
	}while(1);
	return (0);
}

/**
 * control - function for Ctrl + C
 * @signal: int.
 * Return: nothing.
 */
void CTRL_C(int signal)
{
	(void)signal;
	write(STDOUT_FILENO, "\nFinished process\n", 18);
	write(STDOUT_FILENO, "$ ", 2);
}
