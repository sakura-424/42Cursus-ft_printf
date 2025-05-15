/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 09:34:45 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/05 06:29:42 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	if (size <= dest_len)
		return (dest_len + src_len);
	while (src[i] && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// typedef struct s_destlist
// {
// 	char		dest1[50];
// 	char		dest2[50];
// 	char		dest3[50];
// 	char		dest4[50];
// 	char		*src;
// }				t_destlist;

// int	main(void)
// {
// 	t_destlist		destlist;
// 	unsigned int	size;
// 	unsigned int	result1;
// 	unsigned int	result2;

// 	destlist.src = "World";
// 	strcpy(destlist.dest1, "Hello ");
// 	strcpy(destlist.dest2, "Hello ");
// 	size = 12;
// 	printf("\nテストケース1: size = %u\n", size);
// 	printf("連結前 dest = \"%s\", src = \"%s\"\n", destlist.dest1, destlist.src);
// 	result1 = strlcat(destlist.dest1, destlist.src, size);
// 	result2 = ft_strlcat(destlist.dest2, destlist.src, size);
// 	printf("strlcat: dest = \"%s\", 戻り値 = %u\n", destlist.dest1, result1);
// 	printf("ft_strlcat: dest = \"%s\", 戻り値 = %u\n", destlist.dest2, result2);
// 	strcpy(destlist.dest3, "Hello ");
// 	strcpy(destlist.dest4, "Hello ");
// 	size = 8;
// 	printf("\nテストケース2: size = %u\n", size);
// 	printf("連結前 dest = \"%s\", src = \"%s\"\n", destlist.dest3, destlist.src);
// 	result1 = strlcat(destlist.dest3, destlist.src, size);
// 	result2 = ft_strlcat(destlist.dest4, destlist.src, size);
// 	printf("strlcat: dest = \"%s\", 戻り値 = %u\n", destlist.dest3, result1);
// 	printf("ft_strlcat: dest = \"%s\", 戻り値 = %u\n", destlist.dest4, result2);
// 	return (0);
// }
