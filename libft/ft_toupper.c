/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:44:50 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/04 21:58:38 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - ('a' - 'A');
	return (c);
}

// int	main(void)
// {
// 	char	lower;
// 	char	mark;
// 	char	upper;

// 	lower = 'h';
// 	upper = ft_toupper(lower);
// 	printf("%c → %c\n", lower, upper);
// 	mark = '!';
// 	printf("%c → %c\n", mark, ft_toupper(mark));
// 	return (0);
// }
