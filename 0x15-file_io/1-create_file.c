#include "main.h"
#include <stdlib.h>

/**
 * create_file - create a file
 * @filename: the file passed on
 * @text_content: the content of the filename
 * Return: 1 (success), -1 (failure)
*/
int create_file(const char *filename, char *text_content)
{
    int file, f, m;

    if (filename == NULL)
    {
        return (-1);
    }

    if (text_content != NULL)
    {
        m = 0;
        while(text_content[m])
        {
            m++;
        }

    }
    file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    f = write(file, text_content, m);
    
    if (file == -1 || f == -1)
    {
        return (-1);
    }

    return (1);
}