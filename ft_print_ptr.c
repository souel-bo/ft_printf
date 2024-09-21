#include "ft_printf.h"

void ft_print_ptr(unsigned long long nb)
{
    if (!nb)
    {
        ft_putstr("(nil)");
        return;
    }
    ft_putchar('0');
    ft_putchar('x');
    unsigned long long temp = nb;
    char hex[16];
    int i = 0;
    while (temp > 0)
    {
        unsigned long long digit = temp % 16;
        if (digit < 10)
        {
            hex[i++] = digit + '0';
        }
        else 
        {
            hex[i++] = digit - 10 + 'a';
        }
        temp /= 16;
    }
    int j = i - 1;
    while (j > 0)
    {
        ft_putchar(hex[j]);
        j--;
    }
}