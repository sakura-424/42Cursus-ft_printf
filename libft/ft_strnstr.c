/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:56:58 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/09 22:54:55 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	if (len == 0 || little_len > len)
		return (NULL);
	while (big[i] != '\0' && i <= len - little_len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (j < little_len && big[i + j] == little[j])
				j++;
			if (j == little_len)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*haystack = "Hello, this is a test string";
// 	const char	*needle = "test";
// 	char		*result;

// 	result = ft_strnstr(haystack, needle, strlen(haystack));
// 	if (result)
// 		printf("Found '%s' at position: %ld\n", needle, result - haystack);
// 	else
// 		printf("'%s' not found\n", needle);
// 	return (0);
// }
