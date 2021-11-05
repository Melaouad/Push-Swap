/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaouad <melaouad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:29:12 by melaouad          #+#    #+#             */
/*   Updated: 2021/11/05 15:29:14 by melaouad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*haystack1;
	char	*needle1;
	size_t	k;

	if (!*needle || (len == 0 && !haystack))
		return ((char *)haystack);
	while (*haystack && len--)
	{
		if (*haystack == *needle)
		{
			k = len;
			haystack1 = (char *)haystack + 1;
			needle1 = (char *)needle + 1;
			while (*haystack1 == *needle1 && k-- && *haystack1 && *needle1)
			{
				haystack1++;
				needle1++;
			}
			if (!*needle1)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}
