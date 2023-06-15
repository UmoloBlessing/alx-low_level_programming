#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * main - C program that prints
 *
 * Return: 1;
 */
int main(void)
{
int len;
ssize_t bytes_written;
const char *message =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
len = strlen(message);
bytes_written = write(STDERR_FILENO, message, len);
if (bytes_written != len)
return (1);
return (1);
}
