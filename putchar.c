#include "main.h"

/**
 * putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 */

int my_putchar(char c)
{
	return (write(1, &c, 1));
}
