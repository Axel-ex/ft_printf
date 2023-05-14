/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:54:04 by achabrer          #+#    #+#             */
/*   Updated: 2023/05/14 17:05:10 by axelchab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int	check_str(char *str)
{
	if (str[0] == '0' && str[1] == 'x')
	{
		return (1);
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			return (2);
		}
		str++;
	}
	return (3);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_printf("Enter an argument to use in the printf");
		return (0);
	}
	if (check_str(argv[1]) == 1)
	{
		ft_printf("this is the output of an pointer in ft_printf: %p\n", argv[1]);
		printf("this is the output of an pointer in ft_printf: %p", argv[1]);

	}
	if (check_str(argv[1]) == 2)
	{
		ft_printf("this is the output of an int in ft_printf: %d\n", atoi(argv[1]));
		printf("this is the output of an int in ft_printf: %d", atoi(argv[1]));
	}
	if (check_str(argv[1]) == 3)
	{
		ft_printf("this is the output of a string in ft_printf: %s\n", argv[1]);
		printf("this is the output of a string in ft_printf: %s", argv[1]);
	}
	return (0);
}
