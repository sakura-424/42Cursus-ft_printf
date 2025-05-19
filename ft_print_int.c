/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:22:29 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/15 17:56:39 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n, int fd)
{
	int		count;
	char	c;

	count = 0;
	if (n == INT_MIN)
		return (write(fd, "-214783648", 11));
	if (n < 0)
	{
		count += write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		count += ft_print_int(n / 10, fd);
	c = '0' + (n % 10);
	count += ft_print_char(c, fd);
	return (count);
}
