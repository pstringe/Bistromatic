/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 18:49:16 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/11 13:05:57 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*little == '\0')
	{
		return ((char *)big);
	}
	while (*(big + i))
	{
		j = 0;
		while (*(little + j) == *(big + i + j) && *(little + j) && i < len)
		{
			j++;
		}
		if (j == ft_strlen(little))
		{
			return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
