/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:45:56 by melaouad          #+#    #+#             */
/*   Updated: 2021/11/05 15:29:14 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str, const void *ptr, size_t n)
{
	char		*str1;
	const char	*ptr1;

	str1 = (char *)str;
	ptr1 = (char *)ptr;
	if (!str1 && !ptr1)
		return (NULL);
	if (n == 0 || str == ptr)
		return (str);
	while (n > 0)
	{
		*str1++ = *ptr1++;
		n--;
	}
	return (str);
}
