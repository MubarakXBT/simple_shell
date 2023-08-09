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
		prompt();
		buffer = getlyne();
		buffer[strcspn(buffer, "\n")] = '\0';
		token = parser(buffer);
		if (strcmp(token, "exit") == 0)
		{
			break;
		}

		arg = arg_token(token);

		exec(arg[0], arg, NULL);

		free(arg);
		continue;
	}
	return (0);
}
