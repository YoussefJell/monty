#include "monty.h"
#include <ctype.h>
/**
 * parsecmd - parsing file lines into function & args and executes
 * @stack: doubly linked list
 * @lineNumber: number of file lines
 * @lineToParse: file line
 *
 * Returns: void
 */
void parsecmd(stack_t **stack, unsigned int lineNumber, char *lineToParse)
{
	int i = 0;
	char **splitLine;
	instruction_t instruct[] = {{"push", push},
								{"pall", pall},
								{"pint", pint},
								{"pop", pop},
								{"add", add},
								{"swap", swap},
								{"nop", nop},
								{"div", divis},
								{"sub", sub},
								{"mul", mul},
								{"mod", mod},
								{"pchar", pchar},
								{NULL, NULL}};

	splitLine = split_str(lineToParse, "\t\n ");

	isPush(splitLine[0], splitLine[1], lineNumber);

	if (strncmp(splitLine[0], "#", 1) == 0)
		return;
	while (instruct[i].opcode != NULL)
	{
		if (!splitLine[0])
			break;
		if (strcmp(splitLine[0], instruct[i].opcode) == 0)
		{
			instruct[i].f(stack, lineNumber);
			break;
		}
		i++;
	}
	if (instruct[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", lineNumber, splitLine[0]);
		free(splitLine);
		exit(EXIT_FAILURE);
	}
	free(splitLine);
}
