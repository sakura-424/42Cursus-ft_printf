/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 19:17:02 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/15 19:28:59 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_print_hex(unsigned int n, int upper, int fd)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 16)
		count += ft_print_hex(n / 16, upper, fd);
	if (upper)
		c = "0123456789ABCDEF"[n % 16];
	else
		c = "0123456789abcdef"[n % 16];
	count += write(fd, &c, 1);
	return (count);
}
