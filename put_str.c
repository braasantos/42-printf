#include "printf.h"

void put_str(va_list args)
{
  char *str = va_arg(args, char *);
  if (!str)
  {
    write(1, "NULL", 4);
    return ;
  } 
  while (*str)
  {
    write(1, str, 1);
    str++;
  }
}

/*int main (void)
{
  char *b = "teste 1234 teste";
  put_str(b);
}*/