#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer
 * @letters: number of letters it should read and print
 * Return:  the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t a = 0, b = 0, c = 0;
char *str
	if (filename == NULL)
	return (0);

	str = malloc(letters);
	if(str == NULL)
		return (0);

	a = open(filename, O_RDONLY);

	b = read(b, str, letters);

	str[letters] = '\0';

	a = write(STDOUT_FILENO, str, c);

	if (a == -1 || b == -1 || c == -1)
	{
		free(str);
		return (0);
	}
	close(b);
	free(str);

	return (a);
}
