/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:33:33 by achabrer          #+#    #+#             */
/*   Updated: 2023/05/14 17:15:35 by axelchab         ###   ########.fr       */
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
void	ft_print_hexa(int nb);

#endif
