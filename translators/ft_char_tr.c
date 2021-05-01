#include "ft_printf.h"

static void	ft_ralignment(t_node *node, char c)
{
	while (node->width-- > 0)
		ft_putchar_ln(' ', node);
	ft_putchar_ln(c, node);
}

static void	ft_lalignment(t_node *node, char c)
{
	ft_putchar_ln(c, node);
	while (node->width-- > 0)
		ft_putchar_ln(' ', node);
}

static void	ft_costyli(t_node *node)
{
	node->precision = node->precision - 1;
	if (node->precision < 0)
		node->precision = 0;
	node->width = node->width - node->precision - 1;
	if (node->flag == '0' && node->dot == -1)
	{
		node->precision = node->width;
		node->width = 0;
	}
}

void	ft_char_tr(t_node *node, va_list args)
{
	char	c;

	c = va_arg(args, int);
	ft_costyli(node);
	if (node->flag == ' ' || node->flag == '0')
		ft_ralignment(node, c);
	else if (node->flag == '-')
		ft_lalignment(node, c);
}
