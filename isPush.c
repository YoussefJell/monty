#include "monty.h"
/**
 * isPush - checks if elem is pushable
 *
 * @pushCMD: command to check
 * @pushNUM: data of command to check
 * @lineNumber: line number
 */
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
