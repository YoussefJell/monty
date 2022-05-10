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
	
	while (instruct[i].opcode != NULL)
	{
		if (!splitLine[0])
			break;
		if (strcmp(splitLine[0], instruct[i].opcode) == 0)
		{
			if (strcmp(splitLine[0] , "push"))
			{
				if (!splitLine[1] || isdigit(splitLine[1]) != 0)
					fprintf(stderr, "L%d: usage: push integer", lineNumber);
			}
			instruct[i].f(stack, lineNumber);
		}
		i++;
	}
}
