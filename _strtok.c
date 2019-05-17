#include "monty.h"
/**
 * _strtok - tokenize and return an array of tokens
 *@line: the file to cut
 *
 * Return: array of tokens.
 */
char **_strtok(char *line)
{
	const char *delimit =  " \t\n $";
	int i = 0;
	char **tokens;
	char *tok;
	char *dup_token;
	char *first_dup;

	first_dup = strcp(line);
	dup_token = strcp(line);
	tok = strtok(first_dup, delimit);
	i++;
	while (tok != NULL)
	{
		tok = strtok(NULL, delimit);
		i++;
	}
	tokens = malloc(sizeof(char *) * i);
	i = 0;
	tokens[i] = strtok(dup_token, delimit);
	while (tokens[i] != NULL)
	{
		i++;
		tokens[i] = strtok(NULL, delimit);
	}
	free(first_dup);
	return (tokens);
}

/**
 * strcp - copies one string into a duplicate.
 * @str: string to be duplicated.
 *
 * Return: duplicated string.
 */
char *strcp(char *str)
{
	char *dup = NULL;
	int counter = 0;
	int size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	dup = malloc((size + 1) * sizeof(char));
	while (counter <= size)
	{
		dup[counter] = str[counter];
		counter++;
	}
	return (dup);
}
