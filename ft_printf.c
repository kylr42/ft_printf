#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	args;

	va_start (args, str);
	len = ft_parse(str, args);
	va_end(args);
	return (len);
}
