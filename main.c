#include "monty.h"
/**
 *main - this is the main function to process all functions
 *@argc: the two arguemts
 *@argv: stdi for excev
 *Return: 0
 */

int main(int argc, char **argv)
{
	stack_t **stack;

	stack = malloc(sizeof(stack_t));
	*stack = '\0';

	/* extern int global; */

	(void)global;
	if (argc >= 2 && argc <= 3)
		read_file(argv[1], stack);
	else
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	_free(stack);
	free(stack);
	return (0);

}
