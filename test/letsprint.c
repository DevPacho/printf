#include <unistd.h>

/**
 * letsprint - writes the character c to stdout.
 * @c: the character to print.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int letsprint(char c)
{
	return (write(1, &c, 1));
}
