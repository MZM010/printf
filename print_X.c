#include "main.h"

/**
 * print_X - Prints an unsigned integer in hexadecimal format.
 *
 * @list: The va_list containing the unsigned integer argument.
 *
 * Return: The number of hexadecimal digits printed.
 */

int print_X(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int len = 0;
	char digits[] = "0123456789ABCDEF";
	char hex[150];

	int i = 0;

	while (num != 0)
	{
		hex[i++] = digits[num % 16];
		num /= 16;
	}

	if (i == 0)
	{
		my_putchar('0');
		len++;
	}
	i = i - 1;
	for (i = i; i >= 0; i--)
	{
		my_putchar(hex[i]);
		len++;
	}

	hex[len] = '\0';

	return (len);
}
