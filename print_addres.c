#include "main.h"

/**
 * print_address - Print the address of a pointer.
 * @list: The va_list that contains the pointer to print.
 * Return: Number of characters printed.
 */
int print_address(va_list list)
{
    void *arg = va_arg(list, void*);
    char addrStr[50];
    int len = 0;
    
    if (!ptr)
    {
	len += my_putchar("NULL");
    }
    
    else
    {
	snprintf(addrStr, sizeof(addrStr), "%p", addrStr);
    	len += my_putchar(addrStr);
    }
    return (len);
}
