/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 21:13:52 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/02 15:54:34 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		digits;

	digits = count_digits(n);
	str = malloc(sizeof(char) * (digits + 1));
	if (!str)
		return (NULL);
	str[digits] = '\0';
	num = n;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		digits--;
		str[digits] = '0' + (num % 10);
		num = num / 10;
	}
	return (str);
}

// int	main(void)
// {
// 	char	*str;

// 	str = ft_itoa(42);
// 	printf("整数: 42 -> 文字列: \"%s\"\n", str);
// 	free(str);
// 	str = ft_itoa(-123);
// 	printf("整数: -123 -> 文字列: \"%s\"\n", str);
// 	free(str);
// 	str = ft_itoa(0);
// 	printf("整数: 0 -> 文字列: \"%s\"\n", str);
// 	free(str);
// 	return (0);
// }
