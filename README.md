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

## How to install it.

This shell is written in C programming language.
To start using our simple shell you have to clone the repository 
git clone https://github.com/idelahoz14/simple_shell.git

## How to compile it:
This project works on a Linux operating system, we can compile it with the following command:
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
To execute it, we have to check that the executable file is generated:
trusty-64:~/simple_shell$ ./hsh
In our case, the executable file would be hsh, and to execute it we used ./ and the file name.

![Holberton logo](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.holbertonschool.com%2Fvisit_campus&psig=AOvVaw1j9mEoV4brGC7h0oTq9h3E&ust=1597789576507000&source=images&cd=vfe&ved=0CAIQjRxqFwoTCMjj6ZOko-sCFQAAAAAdAAAAABAD) 
**Designed by [Clara Castaño](https://github.com/ClaraCastaD) and [Isaac De La Hoz](https://github.com/idelahoz14), cohort 12.**
