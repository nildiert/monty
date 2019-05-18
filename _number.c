#include "monty.h"
/**
 *_number - Evaluates if a string is numeric
 *@arg: Arguments received
 *Return: 1 if success
 */
char _number(char *arg)
{
	int i = 0;

	while (arg[i])
	{
		if (i == 0 && arg[i] == '-')
			;
		else if (_isdigit(arg[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
