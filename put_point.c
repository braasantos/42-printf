#include "printf.h"

void put_point(va_list args)
{
  void *ptr = va_arg(args, void *);
  write(1, &ptr, sizeof(void *));
}
