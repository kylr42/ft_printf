#include "ft_printf.h"

t_node	*ft_create_node(void)
{
	t_node		*node;

	node = malloc(sizeof(t_node));
	node->len = 0;
	return (node);
}

t_node	*ft_zeroing(t_node *node)
{
	node->dot = -1;
	node->space = 0;
	node->width = 0;
	node->precision = 0;
	node->descriptor = 0;
	node->flag = ' ';
	return (node);
}
