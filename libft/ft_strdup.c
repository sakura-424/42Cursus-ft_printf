/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 08:14:58 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/05 06:33:27 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int	main(void)
// {
// 	char	*src;
// 	char	*dup;
// 	char	*test_strings[3];
// 	int		i;

// 	test_strings[0] = "Hello, World!";
// 	test_strings[1] = "";
// 	test_strings[2] = "Special\tChars\nTest!";
// 	i = 0;
// 	while (i < 3)
// 	{
// 		src = test_strings[i];
// 		dup = ft_strdup(src);
// 		printf("テスト %d:\n", i + 1);
// 		printf("元の文字列: [%s]\n", src);
// 		printf("複製文字列: [%s]\n", dup);
// 		printf("一致するか: %s\n\n", (strcmp(src, dup) == 0) ? "Y" : "N");
// 		free(dup);
// 		i++;
// 	}
// 	return (0);
// }
