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
	int		count;
	int		fd;

	fd = 1;
	count = 0;
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
		count += ft_print_char('%', fd);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	va_start(args, format);
	count = 0;
	 while (*format)
    {
        if (*format == '%')
        {
            format++; // % の次の文字へ
            if (*format)
                count += ft_format(format, args);
        }
        else
            count += ft_print_char(*format, 1);

        format++;
    }
	va_end(args);
	return (count);
}

int main(void)
{
	ft_printf("%%%d\n", 5);
	printf("%%%d\n", 5);
	return (0);
}
