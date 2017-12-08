/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 14:21:38 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/08 13:38:56 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	cpy;
	size_t	lft;

	cpy = ft_strlen(dst);
	len = ft_strlen(src);
	lft = size - cpy - 1;
	if (cpy < size)
	{
		ft_memcpy((dst + cpy), src, lft);
		*(dst + (size - 1)) = '\0';
		return (cpy + len);
	}
	return (size + len);
}
