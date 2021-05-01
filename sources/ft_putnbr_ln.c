#include "ft_printf.h"

void	ft_putnbr_ln(long n, t_node *node)
{
	int		i;
	long	num;
	char	list[2048];

	i = 0;
	num = n;
	if (!n)
		ft_putchar_ln('0', node);
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		list[i++] = (char)(num % 10 + 48);
		num /= 10;
	}
	while (i-- > 0)
		ft_putchar_ln(list[i], node);
}
