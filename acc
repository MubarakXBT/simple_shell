#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 *
 */
int exec(char *argv[])
{
	argv[10] = {"/bin/ls", "-l", NULL};
	execve(argv[0], argv, NULL);

	return (0);
}
