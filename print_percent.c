#include "main.h"
/**
 * print_percent - Print the percent character
 * @list: The va_list (unused in this function)
 * Return: Number of characters printed (always 1)
 */

int print_percent(va_list list)
{
	int counter = 0;
	(void)list;

	my_putchar('%');
	counter++;
	return (counter);
}
