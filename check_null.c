#include "main.h"

/**
 * check_null - Prints the first character
 * of a string and increments char_p.
 * @char_p: A pointer to an integer.
 * @format: The string to print the first character from.
 *
 * Return: The incremented value of char_p.
 */

int check_null(va_list list, int char_p)
{
	(void)list;
	write(1, "%", 1);
	char_p++;
	return (1);

}
