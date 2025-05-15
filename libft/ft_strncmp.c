/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:31:28 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/02 22:46:22 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && *s1 == *s2 && (*s1 != '\0') && (*s2 != '\0'))
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int	main(void)
// {
// 	char	*test1_1;
// 	char	*test1_2;
// 	char	*test2_1;
// 	char	*test2_2;

// 	test1_1 = "Hello";
// 	test1_2 = "Hello";
// 	printf("Test 1 (同じ文字列, n=5):\n");
// 	printf("strncmp:    %d\n", strncmp(test1_1, test1_2, 5));
// 	printf("ft_strncmp: %d\n\n", ft_strncmp(test1_1, test1_2, 5));
// 	printf("Test 2 (同じ文字列, n=3):\n");
// 	printf("strncmp:    %d\n", strncmp(test1_1, test1_2, 3));
// 	printf("ft_strncmp: %d\n\n", ft_strncmp(test1_1, test1_2, 3));
// 	printf("=== Different Strings Tests ===\n");
// 	test2_1 = "Hello";
// 	test2_2 = "Hello!";
// 	printf("Test 3 (前方一致、長さ違い, n=6):\n");
// 	printf("strncmp:    %d\n", strncmp(test2_1, test2_2, 6));
// 	printf("ft_strncmp: %d\n\n", ft_strncmp(test2_1, test2_2, 6));
// 	printf("Test 4 (前方一致、長さ違い, n=5):\n");
// 	printf("strncmp:    %d\n", strncmp(test2_1, test2_2, 5));
// 	printf("ft_strncmp: %d\n\n", ft_strncmp(test2_1, test2_2, 5));
// 	return (0);
// }
