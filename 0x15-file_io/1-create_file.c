#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: pointer to string
 * @text_content: pointer to contents
 *
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
int fd = 0;
int num = 0;
int output = 0;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[num] != '\0')
num++;
}
else
{
close(fd);
return (1);
}
output = write(fd, text_content, num);
if (output == -1 || output != num)
return (-1);
close(fd);
return (1);
}
