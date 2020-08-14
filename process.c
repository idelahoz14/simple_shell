#include "holberton.h"
/**
 *
 *
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
		if (execve(command, ptr, NULL) == -1)
		{
			perror("Error: execve");
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
