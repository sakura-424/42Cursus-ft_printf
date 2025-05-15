/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:49:16 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/04 22:03:15 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}

// int	main(void)
// {
// 	char	upper;
// 	char	symbol;
// 	char	lower;

// 	upper = 'G';
// 	lower = ft_tolower(upper);
// 	printf("%c → %c\n", upper, lower);
// 	symbol = 'X';
// 	printf("%c → %c\n", symbol, ft_tolower(symbol));
// 	return (0);
// }
