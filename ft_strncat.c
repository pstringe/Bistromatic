/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:36:32 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/01 15:49:57 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncat.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t	i;
	int		offset;

	offset = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0' && i < n - 1)	
	{
		s1[i + offset] = s2[i];
		i++;
	}
	
	s1[offset + i] = '\0';
	return (s1);
}
