/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:00:11 by achabrer          #+#    #+#             */
/*   Updated: 2023/05/14 17:18:31 by axelchab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_print(char c, va_list args)
{
	int	bytes;

	bytes = 0;
	if (c == 'c')
		bytes = ft_printchar(va_arg(args, int));
	if (c == 's')
		bytes = ft_printstr(va_arg(args, const char *));
	if (c == 'd')
		bytes = ft_printnb(va_arg(args, int));
	return (bytes);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		bytes;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			bytes += check_print(*(format + 1), args);
			format++;
		}
		else
		{
			write(1, format, 1);
			bytes++;
		}
		format++;
	}
	return (bytes);
}
