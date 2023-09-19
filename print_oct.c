#include "main.h"
/**
 * printf_oct - Prints an unsigned integer in octal format.
 *
 * @list: The va_list containing the unsigned integer argument.
 *
 * Return: The number of octal digits printed.
 */
int print_oct(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int len = 0, i = 0;
	int octal[150];
	int octall = 0;
	do
	{
		octal[i++] = n % 8;
		n /= 8;
	}while (n != 0);

	if (i == 0)
	{
		my_putchar(48);
		len++;
	}
	i = i - 1;

	for (i = i; i >= 0; i--)
	{
		octall = octal[i];
		my_putchar(octall + 48);
		len++;
	}

	return (len);
}
