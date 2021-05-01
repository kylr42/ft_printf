#include "ft_printf.h"

int	ft_parse(const char *str, va_list args)
{
	int		len;
	t_node	*node;

	node = ft_create_node();
	while (*str)
	{
		if (*str != '%')
			ft_putchar_ln(*str++, node);
		else if (*str++ == '%')
		{
			node = ft_zeroing(node);
			str += ft_parse_flag(str, node);
			str += ft_parse_width(str, node, args);
			str += ft_parse_precision(str, node, args);
			str += ft_parse_descriptor(str, node);
			ft_translators(args, node);
		}
	}
	len = node->len;
	free(node);
	return (len);
}
