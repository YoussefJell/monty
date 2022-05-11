#include "monty.h"
void isPush(char *pushCMD, char *pushNUM, unsigned int lineNumber)
{
	if (strcmp(pushCMD, "push") == 0)
	{
		if (pushNUM)
		{
			if (isNumber(pushNUM))
				data = atoi(pushNUM);
			else
			{
				fprintf(stderr, "L%d: usage: push integer\n", lineNumber);
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", lineNumber);
			exit(EXIT_FAILURE);
		}
	}
	else
		return;
}
