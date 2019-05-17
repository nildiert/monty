#include "monty.h"
/**
 *verifier - Verify coincidence on a structure predefined
 *@reception: entry argument
 *@stack: entry argument
 *@line: entry argument
 *Return: If coincidence 0, else 1
 */
void verifier(char **reception, stack_t **stack, int line)
{
	int j = 0;
	/* int global; */
	instruction_t instructions[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		/**{"swap", _swap},
		   {"add", _add},*/
		{"nop", _nop},
		{NULL, NULL}
	};

	(void)reception;
	(void)j;
	(void)instructions;
	(void)stack;
	(void)line;

	for (j = 0; instructions[j].opcode; j++)
	{

		if (!(strcmp(instructions[j].opcode, reception[0])))
		{
			if (!strcmp(reception[0], "push"))
				global = atoi(reception[1]);
			instructions[j].f(stack, (unsigned int)line);
			break;
		}
	}
		if (instructions[j].f == NULL)
		{
			printf("L %d: unknown instruction %s\n", line, reception[0]);
			exit(EXIT_FAILURE);
		}

}
