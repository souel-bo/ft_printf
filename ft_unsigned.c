#include "ft_printf.h"

void unsigned_putnbr(unsigned int num)
{
    if (num >= 10)
    {
        unsigned_putnbr(num / 10);
    }
    ft_putchar(num % 10 + '0');
}