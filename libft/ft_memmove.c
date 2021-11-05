/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:58:35 by melaouad          #+#    #+#             */
/*   Updated: 2021/11/05 15:29:14 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str, const void *ptr, size_t n)
{
	size_t		i;
	char		*str1;
	const char	*ptr1;

	str1 = (char *)str;
	ptr1 = (char *)ptr;
	i = 0;
	if (!str1 && !ptr1)
		return (NULL);
	if (str == ptr)
		return (str);
	if (str1 < ptr1)
	{
		while (i < n)
		{
			str1[i] = ptr1[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			str1[n] = ptr1[n];
	}
	return (str);
}
