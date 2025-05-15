/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:51:53 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/02 23:13:02 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == src)
		return (dest);
	if (s < d && s + len > d)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dest);
}

// int	main(void)
// {
// 	int	source[5];
// 	int	dest[5];
// 	int	i;

// 	i = 0;
// 	source[0] = 1;
// 	source[1] = 2;
// 	source[2] = 3;
// 	source[3] = 4;
// 	source[4] = 5;
// 	ft_memmove(dest, source, 5 * sizeof(int));
// 	while (i < 5)
// 	{
// 		printf("%d ", dest[i]);
// 		i++;
// 	}
// 	return (0);
// }
