#include <unistd.h>

/**
 * _putchar - display a character to stdout
 * @c: the character to display
 * Return: On success 1, On error, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}