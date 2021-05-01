#include "ft_printf.h"

static int	ft_num_len(unsigned int num)
{
	int		i;

	i = 0;
	while (num != 0 && ++i)
		num /= 10;
	return (i);
}

static void	ft_ralignment(t_node *node, unsigned int num)
{
	while (node->width-- > 0)
		ft_putchar_ln(' ', node);
	while (node->precision-- > 0)
		ft_putchar_ln('0', node);
	if (!(node->dot >= 0 && num == 0))
		ft_putnbr_ln(num, node);
}

static void	ft_lalignment(t_node *node, unsigned int num)
{
	while (node->precision-- > 0)
		ft_putchar_ln('0', node);
	if (!(node->dot >= 0 && num == 0))
		ft_putnbr_ln(num, node);
	while (node->width-- > 0)
		ft_putchar_ln(' ', node);
}

static void	ft_costyli(t_node *node, unsigned int num)
{
	int		len;

	len = ft_num_len(num);
	node->precision = node->precision - len;
	if (node->precision < 0)
		node->precision = 0;
	node->width = node->width - node->precision - len;
	if (node->dot == -1 && num == 0)
		node->width--;
	if (node->flag == '0' && node->dot == -1)
	{
		node->precision = node->width;
		node->width = 0;
	}
}

void	ft_un_tr(t_node *node, va_list args)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	ft_costyli(node, num);
	if (node->flag == ' ' || node->flag == '0')
		ft_ralignment(node, num);
	else if (node->flag == '-')
		ft_lalignment(node, num);
}
