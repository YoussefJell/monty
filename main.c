#include <stdlib.h>
#include <stdio.h> 



int main(int argc,char **argv)
{
	char *line_buf = NULL;
	size_t line_buf_size = 0;
	int line_count = 0;
	ssize_t line_size;
	FILE *fp = fopen(*argv, "r");

	if (argc < 2)
	{
		fprintf(stderr, "Usage: monty file\n")
		return (EXIT_FAILURE);	
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file '%s'\n", *argv);
		return (EXIT_FAILURE);
	}

	line_size = getline(&line_buf, &line_buf_size, fp);

	while (line_size >= 0)
	{
		line_count++;

		printf("line[%06d]: chars=%06zd, buf size=%06zu, contents: %s", line_count,
				line_size, line_buf_size, line_buf);

		line_size = getline(&line_buf, &line_buf_size, fp);
	}

	free(line_buf);
	line_buf = NULL;

	fclose(fp);

	return (EXIT_SUCCESS);
}
