#include "main.h"
void parsecmd(stack_t **stack, unsigned int lineNumber, char *lineToParse)
{
	int i = 0;
	char **splitLine;
	instruction_t instruct[] = {{"pall", pall},
								{"push", push},
								{NULL, NULL}};

	splitLine = split_str(lineToParse, " ");
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
