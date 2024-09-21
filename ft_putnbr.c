#include "ft_printf.h"

void ft_putnbr(int n)
{
    long long num = n;
    if (num < 0)
    {
        ft_putchar('-');
        num *= -1;
    }
    if (num >= 10)
    {
        ft_putnbr(num / 10);
    }
    ft_putchar(num % 10 + '0');
}
/*int main ()
{
    ft_putnbr(10);
}*/