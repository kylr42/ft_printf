//
// Created by Jimbo Siona on 4/25/21.
//

#ifndef FT_TRANS_H
# define FT_TRANS_H

int		ft_translators(va_list args, t_node *node);
void	ft_point_tr(t_node *node, va_list args);
void	ft_char_tr(t_node *node, va_list args);
void	ft_int_tr(t_node *node, va_list args);
void	ft_str_tr(t_node *node, va_list args);
void	ft_hex_tr(t_node *node, va_list args);
void	ft_un_tr(t_node *node, va_list args);
void	ft_perc_tr(t_node *node);

#endif //FT_TRANS_H
