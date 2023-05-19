/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:33:33 by achabrer          #+#    #+#             */
/*   Updated: 2023/05/19 10:39:29 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "Libft/libft.h"

int		ft_printf(const char *format, ...);
int		check_print(char c, va_list args);
int		ft_printstr(const char *s);
int		ft_printchar(int c);
int		ft_printnb(int nb);
int		ft_printpointer(unsigned long long pointer);
int		ft_printhexa(unsigned long long nb);
int		ft_printhexa_up(unsigned long long nb);
int		ft_printunsigned(unsigned int nb);

#endif
