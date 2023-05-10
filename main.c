/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:54:04 by achabrer          #+#    #+#             */
/*   Updated: 2023/05/10 16:06:09 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "string";
	ft_printf("my function: the string is %s\n", str);
	printf("original function: the string is %s\n", str);
	return (0);
}
