/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:47:28 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/15 16:14:10 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

static int	ft_putnbr_hex(uintptr_t ptr)
{
	const char	hex[] = "0123456789abcdef";
	int			len;

	len = 0;
	if (ptr >= 16)
		len += ft_putnbr_hex(ptr / 16);
	len += write(1, &hex[ptr % 16], 1);
	return (len);
}

int	ft_print_ptr(void *ptr)
{
	int	count;

	count += write(1, "0x", 2);
	if (!ptr)
		count += write(1, "0", 1);
	else
		count += ft_putnbr_hex((uintptr_t)ptr);
	return (count);
}
