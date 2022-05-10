#include "main.h"
void parsecmd(int lineNumber __attribute__((unused)), char *lineToParse)
{
	int i = 0;
	instruction_t instruct[] = {{"push", push()},
								{NULL, NULL}};
	while (i < 1)
	{
		if (strcmp(lineToParse, instruct[i].opcode) == 0)
		{
			printf("Found %s\n", instruct[i].opcode);
		}
		i++;
	}
}
