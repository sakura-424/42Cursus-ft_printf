/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:53:51 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/05 06:33:47 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*array;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	array = malloc(sizeof(char) * (len1 + len2 + 1));
	if (array == NULL)
		return (NULL);
	ft_strlcpy(array, s1, len1 + 1);
	ft_strlcat(array, s2, len1 + len2 + 1);
	array[len1 + len2] = '\0';
	return (array);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*result;

// 	s1 = "Hello, ";
// 	s2 = "world!";
// 	result = ft_strjoin(s1, s2);
// 	printf("連結結果: %s\n", result);
// 	free(result);
// 	result = ft_strjoin("", "テスト");
// 	printf("空文字列との連結: %s\n", result);
// 	free(result);
// 	result = ft_strjoin("価格: ", "42円");
// 	printf("数字を含む連結: %s\n", result);
// 	free(result);
// 	return (0);
// }
