#include "main.h"

/**
 * print_char - Print a character
 * @list: The va_list that contains the character to print
 * Return: Number of characters printed (always 1)
 */
int print_char(va_list list)
{
	int c;
	int counter = 0;

	c = va_arg(list, int);

	counter++;
	my_putchar(c);

	return (counter);
}
