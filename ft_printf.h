#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int ft_printf(const char *, ...);
void ft_putnbr(int n);
void ft_putchar(char c);
void ft_putstr(char *string);
void ft_puthex_lowercase(unsigned int n);
void ft_puthex_uppercase(unsigned int n);
void unsigned_putnbr(unsigned int num);
void ft_print_ptr(unsigned long long nb);
#endif