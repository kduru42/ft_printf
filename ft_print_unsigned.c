#include "ft_printf.h"

int ft_put_unsigned (unsigned int num)
{
	int	length;
	int	temp;

	length = 0;
	temp = num;
	while (temp)
	{
		length++;
		temp /= 10;
	}
	if (num >= 10)
	{
		ft_put_unsigned(num / 10);
		ft_put_unsigned(num % 10);
	}
	else
		ft_putchar_fd(num + 48, 1);
	return (length);
}


int	ft_print_unsigned(unsigned int num)
{
	int	length;

	length = 0;
	if (num == 0)
		length += write(1, "0", 1);
	else
		length += ft_print_unsigned(num);
	return (length);
}