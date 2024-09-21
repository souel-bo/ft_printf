#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>
int ft_printf(const char *format, ...)
{
    va_list list;
    va_start(list, format);
    int integer;
    char character;
    char *string;
    void *ptr;
    int i = 0;
    while (*format)
    {
        if (*format == '%')
        {
                format++;
                if (*format == 'd' || *format == 'i')
                {
                    integer = va_arg(list, int);
                    ft_putnbr(integer);
                    i++;
                }
                else if (*format == 'c')
                {
                    character = va_arg(list, int);
                    ft_putchar((char)character);
                    i++;
                }
                else if (*format == 's')
                {
                    string = va_arg(list, char *);
                    ft_putstr(string);
                    i++;
                }
                else if (*format == 'x')
                {
                    integer = va_arg(list, unsigned int);
                    ft_puthex_lowercase(integer);
                    i++;
                }
                else if (*format == 'X')
                {
                    integer = va_arg(list, unsigned int);
                    ft_puthex_uppercase(integer);
                    i++;
                }
                else if (*format == 'u')
                {
                    integer = va_arg(list, unsigned int);
                    unsigned_putnbr(integer);
                    i++;
                }
                else if (*format == 'p')
                {
                    ptr = va_arg(list, void *);
                    ft_print_ptr((unsigned long long)ptr);
                    i++;
                }
                else if (*format == '%')
                {
                    ft_putchar('%');
                    i++;
                }
        }
        else
        {
            ft_putchar(*format);
            i++;
        }
        format++;
    }
    return i;
}