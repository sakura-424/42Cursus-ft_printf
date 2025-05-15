/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:54:50 by skatsuya          #+#    #+#             */
/*   Updated: 2025/04/29 19:53:01 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t	s_len;
	char	*array;
	size_t	i;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	array = malloc(sizeof(char) * (len + 1));
	if (!array)
		return (NULL);
	i = start;
	while (j < len && s[i])
	{
		array[j] = s[i];
		i++;
		j++;
	}
	array[j] = '\0';
	return (array);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*sub;

// 	str = "Hello, world!";
// 	sub = ft_substr(str, 0, 5);
// 	printf("1. %s\n", sub);
// 	free(sub);
// 	sub = ft_substr(str, 7, 5);
// 	printf("2. %s\n", sub);
// 	free(sub);
// 	sub = ft_substr(str, 10, 3);
// 	printf("3. %s\n", sub);
// 	free(sub);
// 	return (0);
// }
