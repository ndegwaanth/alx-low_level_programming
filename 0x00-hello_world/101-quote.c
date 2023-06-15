#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/syscall.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a sentence to standard error using write system call.
 * Return: Always 1 (Error)
 */
int main(void)
{
char *message = "and that piece of art's useful\" - Dora Korpar, 2015-10-19\n";
size_t length = strlen(message);
sycall(SYS_write, STDERR_FILENO, message, length);
return (1);
}
