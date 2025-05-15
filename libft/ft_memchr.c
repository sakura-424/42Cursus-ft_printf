/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:53:21 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/09 20:22:19 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		byte;

	ptr = (const unsigned char *)s;
	byte = (unsigned char)c;
	while (n--)
	{
		if (*ptr == byte)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*result;

// 	result = memchr("Hello, World!", 'W', strlen("Hello, World!"));
// 	if (result)
// 	{
// 		printf("文字'W'は先頭から%ldバイト目に見つかりました\n", result - "Hello, World!");
// 		printf("見つかった位置以降の文字列: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("文字'W'は見つかりませんでした\n");
// 	}
// 	return (0);
// }
