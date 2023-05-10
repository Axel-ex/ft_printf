/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:33:33 by achabrer          #+#    #+#             */
/*   Updated: 2023/05/10 15:43:37 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		check_print(char c, va_list args);
void	ft_putstr(const char *s);
void	ft_putchar(int c);
void	ft_putnbr(int nb);
void	ft_print_hexa(int nb);

#endif
