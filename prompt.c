#include <stdio.h>
#include "main.h"
/**
 */
void prompt(void)
{
	printf("$ ");
}
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *  */
char* getlyne()
{
	char *buffer;
	size_t bufsize = 32;
	ssize_t ch;
	
	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate");
		exit(1);
	}
	ch = getline(&buffer, &bufsize,stdin);
	free(buffer);
	return (buffer);
}

#include <stdbool.h>
#include <stdlib.h>
/**
 */
int main(void)
{
	char* buffer;
	while (true)
	{
		prompt();
		buffer = getlyne();
		parser(buffer);
	}
	return (0);
}
