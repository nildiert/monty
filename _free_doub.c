#include "monty.h"
/**
 * _free_doub - tokenize and return an array of tokens
 *@line: the file to cut
 *
 * Return: array of tokens.
 */
void _free_doub(char **args)
{
	int i, j;

	(void)j;
	(void)i;
	free(args);
/*	for(i = 0; *(args + i); i++)
	{
		for (j = 0; *(args + j); j++)
			free(args[j]);*/
/*			printf("::DEBUGG free_doub ::%s\n", args[j]);
	}*/
}
