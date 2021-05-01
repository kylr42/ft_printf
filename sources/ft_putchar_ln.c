#include "ft_printf.h"

void	ft_putchar_ln(char c, t_node *node)
{
	write(1, &c, 1);
	node->len += 1;
}
