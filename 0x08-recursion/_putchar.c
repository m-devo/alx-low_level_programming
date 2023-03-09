#include <unistd.h>

/**
 * _putchar - FUNCTION
 * @c: input
 * Return: always 0 success
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
