#include "ft_printf.h"

int	ft_printnbr(int num)
{
	int	length;

	length = 0;
	ft_putnbr_fd(num,1);
	if (num == 0)
		return (1);
	if (num < 0)
		length++;
	while (num)
	{
		length++;
		num /= 10;
	}
	return (length);
}