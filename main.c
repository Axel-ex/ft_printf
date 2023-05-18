/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achabrer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:54:04 by achabrer          #+#    #+#             */
/*   Updated: 2023/05/18 14:47:34 by achabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

int	check_str(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			return (1);
		}
		str++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j = 0;

	if (argc < 2)
	{
		ft_printf("Enter an argument to use in the printf");
		return (0);
	}
	if (check_str(argv[1]) == 1 && argv[2][0] == 'd')
	{
		i = ft_printf("this is the output of an int in ft_printf: %d\n", atoi(argv[1]));
		j = printf("this is the output of an int in printf: %d\n", atoi(argv[1]));
		printf("return value ft_printf = %d\nreturn value printf = %d\n", i, j);
	}
	if (check_str(argv[1]) == 1 && argv[2][0] == 'x')
	{
		i = ft_printf("this is the output of an hex in ft_printf: %x\n", atoi(argv[1]));
		j = printf("this is the output of an hex in printf: %x\n", atoi(argv[1]));
		printf("return value ft_printf = %d\nreturn value printf = %d\n", i, j);

	}
	if (check_str(argv[1]) == 1 && argv[2][0] == 'X')
	{
		i = ft_printf("this is the output of an hex in ft_printf: %X\n", atoi(argv[1]));
		j = printf("this is the output of an hex in printf: %X\n", atoi(argv[1]));
		printf("return value ft_printf = %d\nreturn value printf = %d\n", i, j);
	}
	if (check_str(argv[1]) == 1 && argv[2][0] == 'p')
	{
		i = ft_printf("this is the output of an hex in ft_printf: %p\n", argv[1]);
		j = printf("this is the output of an hex in printf: %p\n", argv[1]);
		printf("return value ft_printf = %d\nreturn value printf = %d\n", i, j);
	}
	if (check_str(argv[1]) == 0 && argv[2][0] == 's')
	{
		i = ft_printf("this is the output of a string in ft_printf: %s\n", argv[1]);
		j = printf("this is the output of a string in printf: %s\n", argv[1]);
		printf("return value ft_printf = %d\nreturn value printf = %d\n", i, j);
	}
	//case of null pointer
	if (check_str(argv[1]) == 0 && argv[2][0] == 'p')
	{
		char	*ptr = NULL;
		i = ft_printf("this is the output of a null pointer in ft_printf: %s\n", ptr);
		j = printf("this is the output of a null pointer in printf: %s\n", ptr);
		printf("return value ft_printf = %d\nreturn value printf = %d\n", i, j);
	}
	return (0);
}
