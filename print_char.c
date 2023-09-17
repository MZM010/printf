#include "main.h"

/**
 * printf_char - Print a character
 * @list: The va_list that contains the character to print
 * Return: Number of characters printed (always 1)
 */
int print_char(va_list list, int counter)
{
	int c;

	c = va_arg(list, int);

	counter++;
	my_putchar(c);

	return (0);
}
