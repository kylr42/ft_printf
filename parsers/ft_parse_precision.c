#include "ft_printf.h"

int	ft_parse_precision(const char *str, t_node *node, va_list args)
{
	int		i;

	i = 1;
	if (str[0] != '.')
		return (0);
	else
		node->dot = 0;
	if (str[i] == '*')
	{
		node->precision = va_arg(args, int);
		node->dot = node->precision;
		return (2);
	}
	while (str[i] >= '0' && str[i] <= '9')
		node->precision = (node->precision * 10) + (str[i++] - 48);
	return (i);
}
