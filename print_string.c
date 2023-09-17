#include "main.h"
/**
 * print_string - Print the percent character
 * @list: The va_list (unused in this function)
 * Return: Number of characters printed (always 1)
 */

int print_string(va_list list)
{
	int counter = 0;

	const char *my_string = va_arg(list, const char*);

	if (!my_string)
		my_string = "";
	while (*my_string)
	{
		my_putchar(*my_string);
		my_string++;
		counter++;
	}
	return (counter);
}
