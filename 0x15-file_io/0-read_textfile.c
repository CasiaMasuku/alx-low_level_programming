#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters to read
 *
 * Return: exact number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t n_read;
char *buf = malloc(sizeof(char) * letters);
if (!buf)
return (0);
int fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
n_read = read(fd, buf, letters);
if (n_read == -1)
return (0);
ssize_t n_written = write(STDOUT_FILENO, buf, n_read);
if (n_written == -1 || n_written != n_read)
return (0);
close(fd);
free(buf);
return (n_written);
}
