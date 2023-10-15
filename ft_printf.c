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
  if (*format == 'X')
    put_hexa(args, format);
  if (*format == 'x')
    put_hexa(args, format);
  if (*format == 'p')
    put_point(args);
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
    else if (*format == '\n')
      write (1, "\n", 1);
    else
      write(1, format, 1);
    format++;
  }
  //va_arg(args, char); // serve para utilizar os argumentos 
  va_end(args); // para terminar de usar os argumentos
  return (0);
}

int main (void)
{
  char *str = "this is a string test";
  int value = 18;
  int *ptr = &value;
  ft_printf("%s\n", "MY FUNCTION-------TEST-------");
  //ft_printf("write this :%s\n", str);
  //ft_printf("%p\n", &ptr);
  //ft_printf("%c\n", 'b');
  //ft_printf("%i\n", value);
  //ft_printf("%x\n", 30);
  //ft_printf("%X\n", 15);
  ft_printf("hello %s, today is %d, in hex %x, and this is a char: %c\n", "Braulio", 27, 27, 'c');
  printf("%s\n", "ORIGINAL FUNCTION-------TEST-------");
  //printf("write this :%s\n", str);
  //printf("%p\n", &ptr);
  //printf("%c\n", 'b');
  //printf("%i\n", value);
  //printf("%x\n", 30);
  //printf("%X\n", 15);
  printf("hello %s, today is %d, in hex %x, and this is a char: %c\n", "Braulio", 27, 27, 'c');
  return (0);
}