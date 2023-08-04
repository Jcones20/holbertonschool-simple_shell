#include "header.h"

/**
 * main - the main file
 *
 */

int main(int ac, char **argv)
{
	char *prompt = "holberton shell $";
	char *lineptr;
	size_t n =0;

	(void)ac;
	(void)argv;

	printf("%s", prompt);
	getline(&lineptr, &n, stdin);
	printf("%s", prompt);

	free(lineptr);
	return (0);
}
