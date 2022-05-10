#include "main.h"
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
	size_t line_buf_size = 0;
	int line_count = 0;
	ssize_t line_size;
	FILE *fp;
	char *FILENAME = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: monty file\n");
		return (EXIT_FAILURE);
	}
	FILENAME = argv[1];
	fp = fopen(FILENAME, "r");
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file '%s'\n", FILENAME);
		return (EXIT_FAILURE);
	}
	line_size = getline(&line_buf, &line_buf_size, fp);
	while (line_size >= 0)
	{
		line_count++;

		/*printf("line[%06d]: chars=%06ld, buf size=%06lu, contents: %s", line_count,
			   line_size, line_buf_size, line_buf);*/
		parsecmd(line_count, line_buf);
		line_size = getline(&line_buf, &line_buf_size, fp);
	}
	free(line_buf);
	line_buf = NULL;
	fclose(fp);
	return (EXIT_SUCCESS);
}
