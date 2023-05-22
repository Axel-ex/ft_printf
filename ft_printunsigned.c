/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelchab <achabrer@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 08:52:21 by axelchab          #+#    #+#             */
/*   Updated: 2023/05/22 09:03:23 by axelchab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printu(unsigned int nb)
{
	unsigned long	n;

	n = nb;
	if (n < 0)
		n = -n;
	if (n >= 9)
	{
		ft_printunsigned(n / 10);
		n = n % 10;
	}
	ft_putchar_fd(n + 48, 1);
}

int	ft_printunsigned(unsigned int nb)
{
	int	size;

	size = 0;
	ft_printu(nb);
	while (nb > 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}
