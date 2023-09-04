#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: name of file
 * @text_content: contents of file
 *
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
FILE *fp;
int stats;
if (filename == NULL)
return (-1);
fp = fopen(filename, "a");
if (fp == NULL)
return (-1);
if (text_content != NULL)
{
stats = fputs(text_content, fp);
if (stats == EOF)
{
fclose(fp);
return (-1);
}
}
fclose(fp);
return (1);
}
