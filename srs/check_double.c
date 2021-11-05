/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:15:50 by melaouad          #+#    #+#             */
/*   Updated: 2021/11/05 15:29:14 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	before(char **argv, char *str, int size)
{
	int	i;

	i = 0;
	while (argv[i] && i < size)
	{
		if (!ft_strcmp(argv[i], str))
			return (0);
		i++;
	}
	return (1);
}

int	check_double(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!before(argv, argv[i], i))
			put_err_and_exit();
		i++;
	}
	return (1);
}
