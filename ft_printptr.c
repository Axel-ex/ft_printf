/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:28:26 by achabrer          #+#    #+#             */
/*   Updated: 2023/05/22 10:58:28 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

static int	sizeptr(unsigned long long ptr)
{
	int	size;

	size = 0;
	if (ptr < 0)
		ptr = -ptr;
	while (ptr > 0)
	{
		ptr /= 16;
		size++;
	}
	return (size);
}

static void	ft_putptr(unsigned long long ptr)
{
	char	*base;

	base = "0123456789abcdef";
	if (ptr < 0)
		ptr = -ptr;
	if (ptr >= 9)
	{
		ft_putptr(ptr / 16);
		ptr %= 16;
	}
	ft_putchar_fd(base[ptr], 1);
}

int	ft_printptr(unsigned long long ptr)
{
	int	count;

	count = 2 + sizeptr(ptr);
	write(1, "0x", 2);
	if (!ptr)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	ft_putptr(ptr);
	return (count);
}
