/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:16:21 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/15 16:20:39 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_char(char c, int fd)
{
	ft_putchar_fd(c, fd);
	return (1);
}

int	ft_print_str(const char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		s = "null";
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return (i);
}
