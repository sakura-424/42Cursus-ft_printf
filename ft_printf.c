/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  skatsuya@student.42tokyo.jp <skatsuya>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:52:55 by  skatsuya@s       #+#    #+#             */
/*   Updated: 2025/05/09 00:52:55 by  skatsuya@s      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_format(const char *format, va_list args)
{
	if (*format == 'c')
	{
		int c = va_arg(args, int);
		return ft_putchar(c);
	}
	else if (*format == 's')
	{
		char *str = va_arg(args, char *);
		if (str == NULL)
			return ft_putstr("(null)");
		else
			return ft_putstr(str);
	}
	else if (*format == 'p')
	{
		void *ptr = va_arg(args, void *);
	}
	else if (*format == 'd' || *format == 'i')
	{
		int n = va_arg(args, int);
	}
	else if (*format == 'u')
	{
		unsigned int n = va_arg(args, unsigned int);
	}
	else if (*format == 'x')
	{
		unsigned int n = va_arg(args, unsigned int);
	}
	else if (*format == 'X')
	{
		unsigned int n = va_arg(args, unsigned int);
	}
	else if (*format == '%')
		return ft_putchar('%');
	return 0;
}

int ft_printf(const char *format, ...)
{
	int i;
	int count;
	va_list args;
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
