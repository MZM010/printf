#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @list: va_list containing the variadic arguments.
 *
 * Return: The length of the string (int).
 */

int print_rev(va_list list)
{
	int len, counter = 0;
	char *str = va_arg(list, char *);

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
		if (len >= 0)
		{
			my_putchar(str[len]);
			counter++;
			len--;
		}
	}
	return (counter);
}
