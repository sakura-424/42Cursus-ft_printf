/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skatsuya < skatsuya@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:56:08 by  skatsuya@s       #+#    #+#             */
/*   Updated: 2025/05/15 16:29:31 by skatsuya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>
# include "libft.h"

int	ft_printf(const char *format, ...);
int	ft_print_hex(unsigned int n, int upper, int fd);
int	ft_print_int(int n, int fd);
int	ft_print_ptr(void *ptr);
int	ft_print_unsigned(unsigned int n, int fd);
int	ft_print_str(const char *s, int fd);
int	ft_print_char(char c, int fd);

#endif
