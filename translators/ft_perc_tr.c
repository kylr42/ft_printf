#include "ft_printf.h"

static void	ft_ralignment(t_node *node, char c)
{
	while (node->width-- > 0)
		ft_putchar_ln(c, node);
	ft_putchar_ln('%', node);
}

static void	ft_lalignment(t_node *node, char c)
{
	ft_putchar_ln('%', node);
	while (node->width-- > 0)
		ft_putchar_ln(c, node);
}

void	ft_perc_tr(t_node *node)
{
	node->width--;
	if (node->flag == ' ')
		ft_ralignment(node, ' ');
	else if (node->flag == '0')
		ft_ralignment(node, '0');
	else if (node->flag == '-')
		ft_lalignment(node, ' ');
}
