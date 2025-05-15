/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:35:24 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/06 19:37:31 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

// int	main(void)
// {
// 	unsigned char	ip1[4];
// 	unsigned char	ip2[4];

// 	ip1[0] = 192;
// 	ip1[1] = 168;
// 	ip1[2] = 1;
// 	ip1[3] = 1;
// 	ip2[0] = 192;
// 	ip2[1] = 168;
// 	ip2[2] = 2;
// 	ip2[3] = 2;
// 	if (memcmp(ip1, ip2, 2) == 0)
// 	{
// 		printf("同一ネットワーク上のIPアドレス\n");
// 	}
// 	return (0);
// }
