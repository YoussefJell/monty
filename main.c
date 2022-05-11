#include "monty.h"
/**
 * main - monty language interpreter
 *
 * @argc: argument count
 * @argv: argument value (FILENAME in this case)
 * Return: Exit status
 */
int main(int argc, char **argv)
{
	char *line_buf = NULL;
	size_t line_buf_size = 1;
	int line_count = 0;
	ssize_t line_size = 1;
	FILE *fD;
	char *FILENAME = NULL;
	stack_t *my_stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: monty file\n");
		return (EXIT_FAILURE);
	}
	FILENAME = argv[1];
	fD = fopen(FILENAME, "r");

	if (!fD)
	{
		fprintf(stderr, "Error: Can't open file %s\n", FILENAME);
		return (EXIT_FAILURE);
	}
	line_size = getline(&line_buf, &line_buf_size, fD);
	while (line_size >= 0)
	{
		line_count++;
		parsecmd(&my_stack, line_count, line_buf);
		line_size = getline(&line_buf, &line_buf_size, fD);
	}
	free(line_buf);
	line_buf = NULL;
	fclose(fD);
	return (EXIT_SUCCESS);
}
