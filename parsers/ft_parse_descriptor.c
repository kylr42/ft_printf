#include "ft_printf.h"

int 	ft_parse_descriptor(const char *str, t_node *node)
{
	char	*descriptors;

	descriptors = "dicspuxX%o";
	while (*descriptors)
	{
		if (*str == *descriptors++)
		{
			node->descriptor = *str;
			return (1);
		}
	}
	return (0);
}
