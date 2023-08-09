#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * exec - a function to execute command
 * @token: the command
 * @argv: list of argument
 * @envp: enviromental variable
 *
 * Return: void
 */
void exec(char *token, char **argv, char *envp[])
{
	execve(token, argv, envp);
}
