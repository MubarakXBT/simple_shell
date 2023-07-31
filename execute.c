#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 *
 */
void exec(char* token, char** argv, char* envp[])
{
	execve(token, argv, envp);
}
