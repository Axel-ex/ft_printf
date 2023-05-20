/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelchab <achabrer@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:53:22 by axelchab          #+#    #+#             */
/*   Updated: 2023/05/20 20:02:02 by axelchab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "ft_printf.h"

int	size_hexa(unsigned int nb)
{
	int	size;

	size = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		size++;
	}
	while (nb > 0)
	{
		nb = nb / 16;
		size++;
	}
	return (size);
}

int	ft_printhexa(unsigned int nb)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = size_hexa(nb);
	if (nb < 0)
		nb = -nb;
	if (nb >= 16)
	{
		ft_printhexa(nb / 16);
		nb = nb % 16;
	}
	ft_printchar(base[nb]);
	return (count);
}

int	ft_printhexa_up(unsigned int nb)
{
	int		count;
	char	*base;

	count = size_hexa(nb);
	base = "0123456789ABCDEF";
	if (nb < 0)
		nb = -nb;
	if (nb >= 16)
	{
		ft_printhexa_up(nb / 16);
		nb = nb % 16;
	}
	ft_printchar(base[nb]);
	return (count);
}

int	ft_printpointer(unsigned long long pointer)
{
	int	count;

	count = 2 + size_hexa(pointer);
	write(1, "0x", 2);
	if (!pointer)
	{
		count += write(1, "0", 1);
		return (count);
	}
	ft_printhexa(pointer);
	return (count);
}

int	ft_printunsigned(unsigned int nb)
{
	int				count;
	unsigned long	n;

	count = nb_size(nb);
	n = nb;
	if (n < 0)
		n = -n;
	if (n >= 9)
	{
		ft_printunsigned(n / 10);
		n = n % 10;
	}
	ft_putchar_fd(n + 48, 1);
	return (count);
}
