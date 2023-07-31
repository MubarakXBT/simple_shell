#include <stdio.h>
#include "main.h"
/**
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
 */
int main(void)
{
	char** arg;
	char* buffer;
	char* token;



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

		printf("we outside\n");
		printf("Token: %s\n", token);
		printf("arg: %s\n", arg[0]);
		printf("arg: %s\n", arg[1]);
		printf("arg: %s\n", arg[2]);

		exec(token, arg, NULL);
		printf("\n");

		free(arg);
	}
	return (0);
}
