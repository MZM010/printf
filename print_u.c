#include "main.h"

/**
 * print_u - Prints an unsigned
 *
 * @n: The va_list containing
 *
 * Return: The len.
 */
int print_u(unsigned int n)
{
	int div = 1;
	int len = 0;

	for (; (n / div) > 9; )
		div *= 10;
	while (div != 0)
	{
		my_putchar((n / div) % 10 + '0');
		div /= 10;
		len++;
	}
	return (len);
}

/**
 * print_unssiigned - Prints an unsigned
 *
 * @list: The va_list containing
 *
 * Return: The number of digits printed.
 */
int print_unssiigned(va_list list)
{
	unsigned int n;

	n = va_arg(list, unsigned int);

	if (n == 0)
		return (print_u(n));
	if (n < 1)
		return (-1);
	return (print_u(n));
}
