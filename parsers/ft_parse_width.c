#include "ft_printf.h"

int	ft_parse_width(const char *str, t_node *node, va_list args)
{
	int		i;

	i = 0;
	if (str[i] == ' ')
	{
		node->space++;
		i++;
	}
	if (str[i] == '*')
	{
		node->width = va_arg(args, int);
		if (node->width < 0)
		{
			node->flag = '-';
			node->width = -node->width;
		}
		return (1);
	}
	while (str[i] >= '0' && str[i] <= '9')
		node->width = (node->width * 10) + (str[i++] - 48);
	return (i);
}
