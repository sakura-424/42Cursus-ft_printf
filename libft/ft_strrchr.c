/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:18:44 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/05 06:35:28 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char		*last_pos = NULL;
	unsigned char	ch;

	ch = (char)c;
	while (*str != '\0')
	{
		if (*str == ch)
			last_pos = str;
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return ((char *)last_pos);
}

// int	main(void)
// {
// 	char	str[16];
// 	char	*c2;
// 	int		num2;

// 	strcpy(str, "tokugawaieyasu");
// 	c2 = ft_strrchr(str, 'a');
// 	if (c2 == NULL)
// 	{
// 		printf("「%s」の中に文字aはありません。\n", str);
// 		return (1);
// 	}
// 	num2 = c2 - str + 1;
// 	printf("「%s」で最後に文字「a」が現れる場所は%d文字目です。\n", str, num2);
// 	printf("\n");
// 	return (0);
// }
