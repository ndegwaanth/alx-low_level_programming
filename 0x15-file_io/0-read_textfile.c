#include "main.h"
#include <stdlib.h>

/**
 * read_textto file - reads the file and print to posix
 * @filename: the file
 * @letters: the buffer
 * Return: actual number of letter it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t *buffer;
    ssize_t file;
    ssize_t t;
    ssize_t size;

    file = open(filename, O_RDONLY);
    if (filename == NULL)
    {
        return (0);
    }
    
    buffer = malloc(sizeof(char) * letters);
    if (file == -1)
        return (0);
    size = read(file, buffer, letters);
    t = write(STDOUT_FILENO, buffer, size);

    free(buffer);
    close(file);
    return (t);
}