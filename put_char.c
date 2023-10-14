#include "printf.h"

void put_char(va_list args)
{
  char c = va_arg(args, int);
  write(1, &c, 1);
}