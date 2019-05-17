#include "monty.h"
/**
 *read_file - this is the function to read the file
 *@mystring: entry string
 *@stack: entry stack
 *
 *Return: 0
 */
void read_file(char *mystring, stack_t **stack)
/* int main(int argc, char **argv) */
{
	int count = 0;
	FILE *file = fopen(mystring, "r");
	size_t bufsize = 0;

	if (file)
	{
		char *line = NULL;
		char **arguments;

		(void)stack;

		while (getline(&line, &bufsize, file) != -1)
		{
			count++;
/*DEBUG::			printf("%s", line);*/
			arguments = _strtok(line);
			verifier(arguments, stack, count);
			_free_doub(arguments);
		}
		fclose(file);
	}
	else
	{
		fprintf(stderr, "Error: Can't open file, %s\n", mystring);
		exit(EXIT_FAILURE);
	}
}
