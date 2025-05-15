/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:52:40 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/15 19:00:43 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_print_unsigned(unsigned int n, int fd)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += ft_print_unsigned(n / 10, fd);
	c = '0' + (n % 10);
	count += write(fd, &c, 1);
	return (count);
}
