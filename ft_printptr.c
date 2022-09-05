#include "ft_printf.h"

int convert_to_hex(int num)
{
	int	length;

	length = 0;
	if (num >= 16)
	{
		convert_to_hex(num / 16);
		convert_to_hex(num % 16);
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

int	ft_print_ptr(unsigned long long ptr)
{
	int length;

	length = 0;
	length += write(1, "0x", 2);
	if (ptr == 0)
		length += write(1, "0", 1);
	else
		length += convert_to_hex(ptr);
	return (length);
}