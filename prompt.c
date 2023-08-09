#include <stdio.h>
#include "main.h"
/**
 * prompt - a function to display the shell prompt
 *
 * Return: void
 */
void prompt(void)
{
	printf("$ ");
}

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * main - the main function of my shell
 *
 * Return: 0 on exit
 */
int main(void)
{
	char **arg;
	char *buffer;
	char *token;



	while (true)
	{
		if (isatty(STDIN_FILENO))
			prompt();

		buffer = getlyne();
		buffer[strcspn(buffer, "\n")] = '\0';

		if (strcmp(buffer, "exit") == 0)
		{
			break;
		}

		token = parser(buffer);
		arg = arg_token(token);

		exec(arg[0], arg, NULL);

		free(arg);
	}
	free(buffer);
	return (0);
}
