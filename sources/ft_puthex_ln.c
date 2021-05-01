#include "ft_printf.h"

void	ft_puthex_ln(unsigned int n, t_node *node)
{
	int				i;
	unsigned int	num;
	char			list[2048];

	i = 0;
	num = n;
	if (!n)
		ft_putchar_ln('0', node);
	while (num > 0)
	{
		if (node->descriptor == 'x' && (num % 16) > 9)
			list[i++] = (char)(num % 16 + 87);
		else if (node->descriptor == 'X' && (num % 16) > 9)
			list[i++] = (char)(num % 16 + 55);
		else if (node->descriptor == 'o')
			list[i++] = (char)(num % 8 + 48);
		else
			list[i++] = (char)(num % 16 + 48);
		if (node->descriptor == 'o')
			num /= 8;
		else
			num /= 16;
	}
	while (i-- > 0)
		ft_putchar_ln(list[i], node);
}
