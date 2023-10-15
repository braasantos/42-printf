#include "printf.h"

static	void	ft_gethexa(int n, const char *format)
{
  char hexalow[] = "0123456789abcdef";
  char hexaupp[] = "0123456789ABCDEF";

	if (n >= 16)
  {
    ft_gethexa(n / 16, format);
    n = n % 16;
  }
  if (*format == 'X')
  {
    write(1, &hexaupp[n], 1);
    return ;
  }
  write(1, &hexalow[n], 1);
}

void	put_hexa(va_list args, const char *format)
{
  int nbr = va_arg(args, int);

	if (nbr < 0)
		nbr *= -1;
  if (nbr == 0)
  {
    write(1, "0", 1);
    return ;
  }
	ft_gethexa(nbr, format);
}
