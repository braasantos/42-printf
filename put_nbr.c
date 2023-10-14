#include "printf.h"

static	void	ft_getnbr(int n)
{
	if (n >= 10)
	{
		ft_getnbr(n / 10);
		n = n % 10;
	}
	if (n < 10)
	{
		n += 48;
		write(1, &n, 1);
	}
}

void	put_nbr(va_list args)
{
  int nbr = va_arg(args, int);

	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	ft_getnbr(nbr);
}