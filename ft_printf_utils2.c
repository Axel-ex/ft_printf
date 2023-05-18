/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelchab <achabrer@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:53:22 by axelchab          #+#    #+#             */
/*   Updated: 2023/05/18 14:26:15 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

int	ft_printhexa(unsigned long long nb)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (nb < 0)
	{
		nb = -nb;
		count = ft_printchar('-');
	}
	if (nb > 16)
	{
		ft_printhexa(nb / 16);
		nb = nb % 16;
	}
	count += ft_printchar(base[nb]);
	return (count);
}

int	ft_printhexa_up(unsigned long long nb)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (nb < 0)
	{
		nb = -nb;
		count = ft_printchar('-');
	}
	if (nb > 16)
	{
		ft_printhexa_up(nb / 16);
		nb = nb % 16;
	}
	count += ft_printchar(base[nb]);
	return (count);
}

int	ft_printpointer(unsigned long long pointer)
{
	int	count;

	if (!pointer)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	count = 2;
	write(1, "0x", 2);
	count = ft_printhexa(pointer);
	return (count);
}
