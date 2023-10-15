#include "printf.h"

static	void	ft_getadress(unsigned int n)
{
  char hexalow[] = "0123456789abcdef";

	if (n >= 16)
  {
    ft_getadress(n / 16);
    n = n % 16;
  }
  write(1, &hexalow[n], 1);
}
void put_point(va_list args)
{
  unsigned int nbr = va_arg(args, int);

  write(1, "0x", 2);
  if (nbr == 0)
  {
    write(1, "0", 1);
    return ;
  }
	ft_getadress(nbr);
}


