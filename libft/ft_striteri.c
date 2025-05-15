/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 23:03:08 by skatsuya          #+#    #+#             */
/*   Updated: 2025/04/28 23:35:32 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	replace_spaces(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c == ' ')
// 		*c = '_';
// }

// int	main(void)
// {
// 	char	s1[] = "Hello World from 42Tokyo";

// 	printf("変換前: %s\n", s1);
// 	ft_striteri(s1, &replace_spaces);
// 	printf("変換後: %s\n", s1);
// 	return (0);
// }
