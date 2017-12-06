/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:21:38 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/05 17:21:43 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	tmp;
	size_t	len;
	size_t	cpy;

	tmp = ft_strlen(dst);
	len = ft_strlen(src);

	if (size > 0 && tmp < tmp - 1)
	{
		if (len > size - tmp)
		{
			cpy = size - tmp - 1;
		}
		else
		{
			cpy = len;
		}
		ft_memcpy(dst + tmp, src, cpy);
		dst[tmp+ cpy] = '\0';
	}
	return (tmp + len);
}
