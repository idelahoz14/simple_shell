# The Simple Shell Project

## Introduction:

In this project we've created our own simple shell. To do this, we must understand very well the system calls,how do the environment variables work, how does the shell work.
Thanks to this project, we could implement everything we learned in the trimester.

## Description:

The shell project consist in write our own simple shell, meeting the proposed requirements(see below). We will build a function that can produce terminal outputs, also we create a man page for our function.

## Requirements:

### General

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Your shell should not have any memory leaks
* No more than 5 functions per file
* All your header files should be include guarded
* Use system calls only when you need to (why?)

### Github

There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

## System calls allowed

This functions and system calls are the only ones that we are allowed to use.

FUNCTION	MAN
access	man 2 access
chdir	man 2 chdir
close	man 2 close
closedir	man 3 closedir
execve	man 2 execve
exit	man 3 exit
_exit	man 2 _exit
fflush	man 3 fflush
fork	man 2 fork
free	man 3 free
getcwd	man 3 getcwd
getline	man 3 getline
isatty	man 3 isatty
kill	man 2 kill
malloc	man 3 malloc
open	man 2 open
opendir	man 3 opendir
perror	man 3 perror
read	man 2 read
readdir	man 3 readdir
signal	man 2 signal
stat (__xstat)	man 2 stat
lstat (__lxstat)	man 2 lstat
fstat (__fxstat)	man 2 fstat
strtok	man 3 strtok
wait	man 2 wait
waitpid	man 2 waitpid
wait3	man 2 wait3
wait4	man 2 wait4
write	man 2 write

## How to install it.

This shell is written in C programming language.
To start using our simple shell you have to clone the repository
git clone https://github.com/idelahoz14/simple_shell.git

## How to compile it:
This project works on a Linux operating system, we can compile it with the following command:
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
To execute it, we have to check that the executable file is generated:

So after we have the executable we simply need to execute it .

ubuntu/trusty64  $./hsh
$
So after we are in our own homebrew shell I'm going to show you some examples,it should handle by default the ls command with /bin/ls and without the ls.

$ /bin/ls
example.txt hello.txt World.txt
$ ls
example.txt hello.txt World.txt
we can also use it on non-interactive mode

$ echo "/bin/ls" | ./hsh
example.txt hello.txt World.txt
ubuntu/trusty64 $
You can also:

use it with Path direct version or only "ls"
Use any variable that is found in PATH of ubuntu 14.04.
You can feel to try and report any bug you find in the Shell to me.

## Header file

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
void CTRL_C(int signal);
int _strlen(char *s);

extern char **environ;

#endif

![Holberton logo](https://camo.githubusercontent.com/80e4aef5357b80f03b960818a751e2be258ccc97/68747470733a2f2f7777772e686f6c626572746f6e7363686f6f6c2e636f6d2f686f6c626572746f6e2d6c6f676f2e706e67)

**Designed by [Clara Castaño](https://github.com/ClaraCastaD) and [Isaac De La Hoz](https://github.com/idelahoz14), cohort 12.**
