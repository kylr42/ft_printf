//
// Created by Jimbo Siona on 4/25/21.
//

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# include "ft_node.h"
# include "ft_parse.h"
# include "ft_trans.h"

int		ft_printf(const char *str, ...);
void	ft_putchar_ln(char c, t_node *node);
void	ft_putnbr_ln(long n, t_node *node);
void	ft_puthex_ln(unsigned int n, t_node *node);
void	ft_putpoint_ln(unsigned long n, t_node *node);

#endif //FT_PRINTF_H
