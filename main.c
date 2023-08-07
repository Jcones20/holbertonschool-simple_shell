#include "header.h"
#include <string.h>
/**
 * main - the main file
 *
 */

int main(int ac, char **argv)
{
	char *prompt = "(holberton) shell $ ";
	char *lineptr = NULL; 
	char *lineptr_cpy = NULL;
	size_t n = 0;
	ssize_t read_line;
	const char *delim = "\n";
	(void)ac;

	while(1)
	{
		printf("%s", prompt);
		read_line = getline(&lineptr, &n, stdin);

		if (read_line == -1)
		{
			printf("Exit shell\n");
			return(-1);
		}

		lineptr_cpy = malloc(sizeof(char) * read_line);
		if (lineptr_cpy == NULL)
		{
			perror("memory allocation error");
			return (-1);
		}
		printf("%s\n", lineptr);

		free(lineptr);
	}

	return 0;
}
