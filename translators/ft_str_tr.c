#include "ft_printf.h"

static size_t	ft_strlen(char *str)
{
	int		i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

static void	ft_ralignment(t_node *node, char *str)
{
	while (node->width-- > 0)
		ft_putchar_ln(' ', node);
	while (*str && (node->precision-- > 0 || node->dot == -1))
		ft_putchar_ln(*str++, node);
}

static void	ft_lalignment(t_node *node, char *str)
{
	while (*str && (node->precision-- > 0 || node->dot == -1))
		ft_putchar_ln(*str++, node);
	while (node->width-- > 0)
		ft_putchar_ln(' ', node);
}

void	ft_str_tr(t_node *node, va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
		str = "(null)";
	if (node->precision < 0)
		node->precision = ft_strlen(str);
	if (node->precision >= (int) ft_strlen(str) || node->dot == -1)
		node->width -= ft_strlen(str);
	else
		node->width -= node->precision;
	if (node->flag == ' ' || node->flag == '0')
		ft_ralignment(node, str);
	else if (node->flag == '-')
		ft_lalignment(node, str);
}
