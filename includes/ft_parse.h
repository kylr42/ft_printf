//
// Created by Jimbo Siona on 4/25/21.
//

#ifndef FT_PARSE_H
# define FT_PARSE_H

int		ft_parse(const char *str, va_list args);
int		ft_parse_flag(const char *str, t_node *node);
int		ft_parse_descriptor(const char *str, t_node *node);
int		ft_parse_int(const char *str, va_list args, t_node *node);
int		ft_parse_width(const char *str, t_node *node, va_list args);
int		ft_parse_precision(const char *str, t_node *node, va_list args);

#endif //FT_PARSE_H
