/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 08:12:32 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/04 20:36:02 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str && (((unsigned char)*str >= 9 && (unsigned char)*str <= 13)
			|| (unsigned char)*str == ' '))
		str++;
	if (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

// int	main(void)
// {
// 	printf("ft_atoi: %d\natoi: %d\n", ft_atoi("--20"), atoi("--20"));
// 	// char	*tests[20];
// 	// int		i;

// 	// tests[0] = "0";
// 	// tests[1] = "-123";
// 	// tests[2] = "+123";
// 	// i = 0;
// 	// while (i < 20)
// 	// {
// 	// 	printf("入力: %-20s → ft_atoi: %-10d | atoi: %d\n", tests[i],
// 	// 		ft_atoi(tests[i]), atoi(tests[i]));
// 	// 	i++;
// 	// }
// 	return (0);
// }
