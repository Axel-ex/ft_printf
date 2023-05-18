/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelchab <achabrer@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:53:22 by axelchab          #+#    #+#             */
/*   Updated: 2023/05/17 10:10:20 by axelchab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long pointer)
{
	unsigned long	*ptr;
	int				size;
	int				i;

	size = 0;
	ptr = &pointer;
	while (*ptr)
	{
		write(1, &ptr, 1);
		ptr++;
		size++;
	}
	return (size);
}
