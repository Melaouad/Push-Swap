/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 15:17:34 by melaouad          #+#    #+#             */
/*   Updated: 2021/11/05 15:29:14 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		nb = nb * (-1);
		i++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	len = ft_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	if (n < 0)
	{
		n = n * (-1);
		dest[i] = '-';
		i++;
	}
	dest[len] = '\0';
	while (i <= --len)
	{
		dest[len] = ((n % 10) + 48);
		n = n / 10;
	}
	return (dest);
}
