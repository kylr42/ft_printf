//
// Created by Jimbo Siona on 4/25/21.
//

#ifndef FT_NODE_H
# define FT_NODE_H

typedef struct s_node
{
	int		dot;
	int		len;
	char	flag;
	int		width;
	int		space;
	int		precision;
	char	descriptor;
}	t_node;

t_node	*ft_create_node(void);
t_node	*ft_zeroing(t_node *node);

#endif //FT_NODE_H
