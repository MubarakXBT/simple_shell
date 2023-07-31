#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 */
char** arg_token(char* token)
{
	int i = 0;
	char** arg = malloc(sizeof(token) * 4);

	while (token != NULL && i < 4)
	{
		token = strtok(NULL, " ");
		arg[i] = token;
		i++;

	}
	arg[i] = NULL;

	/*g = strdup(token);*/
	return (arg);
}
