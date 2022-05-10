#include "main.h"
void parsecmd(unsigned int lineNumber, char *lineToParse, stack_t **stack)
{
	int i = 0;
	char **splitLine;
	instruction_t instruct[] = {{"push", push},
								{"pall", pall},
								{NULL, NULL}};

	splitLine = split_str(lineToParse, " ");
	data = atoi(splitLine[1]);
	while (i < 2)
	{
		if (strcmp(splitLine[0], instruct[i].opcode) == 0)
		{
			printf("Found %s\n", instruct[i].opcode);
			instruct[i].f(stack, lineNumber);
		}
		i++;
	}
}
