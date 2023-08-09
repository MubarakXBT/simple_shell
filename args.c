#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * arg_token - A function to get the arguments of a command
 * @token: a recieved tokens of command from the user
 *
 * Return: array of arguments
 */
char **arg_token(char *token)
{
	int i = 0;
	char **arg = malloc(sizeof(token) * 4);

	while (token != NULL && i < 4)
	{
		token = strtok(NULL, " ");
		arg[i] = token;
		i++;

	}
	arg[i] = NULL;

	return (arg);
}
