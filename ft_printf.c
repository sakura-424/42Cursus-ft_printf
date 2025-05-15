/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:52:55 by  skatsuya@s       #+#    #+#             */
/*   Updated: 2025/05/15 19:57:52 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *format, va_list args)
{
	char	*str;
	void	*ptr;
	int		count;
	int		fd;

	fd = 1;
	if (*format == 'c')
		count += ft_print_char(va_arg(args, int), fd);
	else if (*format == 's')
		count += ft_print_str(va_arg(args, char *), fd);
	else if (*format == 'p')
		count += ft_print_ptr(va_arg(args, void *));
	else if (*format == 'd' || *format == 'i')
		count += ft_print_int(va_arg(args, int), fd);
	else if (*format == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int), fd);
	else if (*format == 'x')
		count += ft_print_hex(va_arg(args, unsigned int), 0, fd);
	else if (*format == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), 1, fd);
	else if (*format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			count = count + ft_format(&format[++1], args);
		else
			count = count + write(1, &format[i], 1);
		i++;
	}
	va_end(args);
}
