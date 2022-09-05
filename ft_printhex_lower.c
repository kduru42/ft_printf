#include "ft_printf.h"

int convert_to_hex_lower(int num)
{
	int	length;

	length = 0;
	if (num >= 16)
	{
		convert_to_hex_lower(num / 16);
		convert_to_hex_lower(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putnbr_fd(num + '0', 1);
		else
			ft_putchar_fd(num - 10 + 'a', 1);
		length++;
	}
	return (length);
}

int	ft_print_hex_lower(unsigned int num)
{
	int	length;

	length = 0;
	if (num == 0)
		length += write(1, "0", 1);
	else
		length += convert_to_hex_lower(num);
	return (length);
}