#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "shell.h"

/**
 * main - function to start the shell project
 * @ac: argument counter
 * @av: argument array
 * Return: ac
 */

int main(int ac, char **av)
{
	char *readGet, **tokenizer, **executeShell;

	if (av == NULL)
	{
		return ('\0');
	}
	while (1)
	{
		printf("$ ");
		readGet = read_line();
		tokenizer = strtoken(readGet);
		/*free(readGet);*/
		executeShell = executer(tokenizer);
		/*free(tokenizer);*/
	}
free(readGet);
free(tokenizer);
free(executeShell);
return (ac);
}
