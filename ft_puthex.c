#include "ft_printf.h"

void ft_puthex_lowercase(unsigned int n)
{
    char *hex = "0123456789abcdef";
    if (n >= 16)
        ft_puthex_lowercase(n / 16);
    ft_putchar(hex[n % 16]);
}
void ft_puthex_uppercase(unsigned int n)
{
    char *hex = "0123456789ABCDEF";
    if (n >= 16)
        ft_puthex_uppercase(n / 16);
    ft_putchar(hex[n % 16]);
}