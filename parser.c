#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * parser - a function to convert user input to tokens
 * @buffer: string of inputs
 *
 * Return: pointer to tokens
 */
char *parser(char *buffer)
{
	char *found;

	found = strtok(buffer, " ");

	return (found);
}
