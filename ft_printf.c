#include "printf.h"
char ft_checkformat(va_list args, const char *format)
{
  // verifica se a posicao que estamos no format string é igal a um dos formats indicados se for chama a funcao para imprimir os numeros 
  if (*format == 'c')
    put_char(args);
  if (*format == 'd')
    put_nbr(args);
  if (*format == 's')
    put_str(args);
  if (*format == 'i')
    put_nbr(args);
  /*if (*format == 'X')
    put_hexa(args);
  if (*format == 'x')
    put_hexa(args);
  if (*format == 'p')
    put_point(args);*/
  if (*format == '%')
    write(1, "%", 1);
}

int ft_printf(const char *format, ...)
{
  va_list args; // va_list é um tipo de variavel e args é o nome 
  va_start(args, format); // serve para iniciar o uso dos argumentos
  while (*format)
  {
    if (*format == '%')
    {
      format++;
      ft_checkformat(args, format);
  }
    if (*format == '\n')
      write (1, "\n", 1);
    format++;
  }
  //va_arg(args, char); // serve para utilizar os argumentos 
  va_end(args); // para terminar de usar os argumentos
  return (0);
}

int main (void)
{
  ft_printf("%s\n", "MY FUNCTION-------TEST-------");
  ft_printf("%s\n", "this is a string test");
  ft_printf("%c\n", 'b');
  ft_printf("%i\n", -4356);
  printf("%s\n", "MY FUNCTION-------TEST-------");
  printf("%s\n", "this is a string test");
  printf("%c\n", 'b');
  printf("%i\n", -4356);
  printf("%#X\n", 15);
  printf("%#x\n", 15);
  return (0);
}