/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 20:43:39 by skatsuya          #+#    #+#             */
/*   Updated: 2025/05/05 06:31:24 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	start = 0;
	end = 0;
	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	trim = ft_substr(s1, start, end - start + 1);
	return (trim);
}

// int	main(void)
// {
// 	char	*original;
// 	char	*trimmed;

// 	original = "   Hello World!   ";
// 	trimmed = ft_strtrim(original, " ");
// 	printf("Original: '%s'\n", original);
// 	printf("Trimmed:  '%s'\n", trimmed);
// 	free(trimmed);
// 	original = "\t\n Hello \t\n";
// 	trimmed = ft_strtrim(original, " \t\n");
// 	printf("Original: '%s'\n", original);
// 	printf("Trimmed:  '%s'\n", trimmed);
// 	free(trimmed);
// 	original = "###Test String###";
// 	trimmed = ft_strtrim(original, "#");
// 	printf("Original: '%s'\n", original);
// 	printf("Trimmed:  '%s'\n", trimmed);
// 	free(trimmed);
// 	return (0);
// }
