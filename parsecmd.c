#include "monty.h"
void parsecmd(stack_t **stack, unsigned int lineNumber, char *lineToParse)
{
	int i = 0;
	char **splitLine;
	instruction_t instruct[] = {{"push", push},
								{"pall", pall},
								{"pint", pint},
								{NULL, NULL}};

	splitLine = split_str(lineToParse, "\t\n ");
	if (splitLine[1])
	{
		data = atoi(splitLine[1]);
	}
	while (instruct[i].opcode != NULL)
	{
		if (strcmp(splitLine[0], instruct[i].opcode) == 0)
		{
			instruct[i].f(stack, lineNumber);
		}
		i++;
	}
}
