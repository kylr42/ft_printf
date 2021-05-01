#include "ft_printf.h"

int	ft_translators(va_list args, t_node *node)
{
	if (node->descriptor == 'd' || node->descriptor == 'i')
		ft_int_tr(node, args);
	else if (node->descriptor == 'c')
		ft_char_tr(node, args);
	else if (node->descriptor == 's')
		ft_str_tr(node, args);
	else if (node->descriptor == 'X' || node->descriptor == 'x'
		|| node->descriptor == 'o')
		ft_hex_tr(node, args);
	else if (node->descriptor == 'p')
		ft_point_tr(node, args);
	else if (node->descriptor == 'u')
		ft_un_tr(node, args);
	else if (node->descriptor == '%')
		ft_perc_tr(node);
	return (0);
}
