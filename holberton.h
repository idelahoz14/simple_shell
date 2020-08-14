#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

char **split(char *line);
char *read_line();
int process(char **ptr);
int _strcmp(char *s1, char *s2);
int environment(char **env);

extern char **environ;

#endif
