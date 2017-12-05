/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 18:49:16 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/04 19:14:00 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	len;

	if( *little == '\0')
	{
		return ((char *)big);
	}

	len = ft_strlen(little);
	//big = ft_strchr(big, (int)little);
	while((big = ft_strchr(big, (int)little)) != NULL)
	{
		if(ft_memcmp(big, little, len) == 0)
		{
			return ((char *)little);
		}
	}

	return (NULL);
}
