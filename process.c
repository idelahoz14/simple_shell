#include "holberton.h"
/**
 * process - execute typed command
 * @ptr: Contains command and flags
 * Return: Always 0.
 */

int process(char **ptr)
{
	pid_t child_pid, pid;
	char *command = ptr[0];
	int status;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error: fork failure");
		exit(EXIT_FAILURE);
	}
	if (child_pid == 0)
	{
		if (command == NULL)
		{
			free(command);
			free(ptr);
			exit(EXIT_FAILURE);
		}
		if (execve(command, ptr, environ) == -1)
		{
			perror("Error: execve");
			free(command);
			free(ptr);
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		pid = wait(&status);
		if (pid < 0)
		{
			perror("Wait");
			exit(EXIT_FAILURE);
		}
		wait(NULL);
	}

	return (0);
}
