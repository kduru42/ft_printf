#include "ft_printf.h"

int	ft_print_char(int a)
{
	write(1, &a, 1);
	return (1);
}