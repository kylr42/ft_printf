#include "ft_printf.h"

int	ft_parse_flag(const char *str, t_node *node)
{
	int		i;

	i = 0;
	if (str[i] == ' ')
	{
		node->space++;
		i++;
	}
	while (str[i] == '-' || str[i] == '0')
	{
		if (str[i] == '-')
			node->flag = '-';
		else if (str[i] == '0' && node->flag == ' ')
			node->flag = '0';
		i++;
	}
	return (i);
}
