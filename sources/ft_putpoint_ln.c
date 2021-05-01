#include "ft_printf.h"

void	ft_putpoint_ln(unsigned long n, t_node *node)
{
	int				i;
	unsigned long	num;
	char			list[2048];

	i = 0;
	num = n;
	ft_putchar_ln('0', node);
	ft_putchar_ln('x', node);
	if (!n && node->dot != 0)
		ft_putchar_ln('0', node);
	while (num > 0)
	{
		if (node->descriptor == 'p' && (num % 16) > 9)
			list[i++] = (char)(num % 16 + 87);
		else
			list[i++] = (char)(num % 16 + 48);
		num /= 16;
	}
	while (i-- > 0)
		ft_putchar_ln(list[i], node);
}
