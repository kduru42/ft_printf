#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_print_char(int a);
int	ft_printf(const char *str, ...);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_string(char *str);
int	ft_printnbr(int num);
int	ft_print_unsigned(unsigned int num);
int	ft_print_hex_lower(unsigned int num);
int	ft_print_hex_upper(unsigned int num);
int ft_print_percent (void);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int ft_put_unsigned (size_t num);
int ft_formats (va_list args, const char format);
void convert_to_hex_upper(size_t num);
void convert_to_hex_lower(size_t num);
void	ft_putstr(char *str);
void convert_to_hex(size_t num);
int check_max_min (unsigned long long num);
int find_len (size_t num);

#endif