#ifndef PRINTF_H
#define PRINTF_H

//HEADERS
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

// FUNCTIONS
int ft_printf(const char *format, ...);
void put_char(va_list args);
char ft_checkformat(va_list args, const char *format);
void put_str(va_list args);
void	put_nbr(va_list args);

#endif