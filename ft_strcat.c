/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:36:32 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/30 16:05:46 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcat.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int		i;
	int		offset;

	offset = ft_strlen(s1);
	i = -1;
	while (s1[++i] != '\0')
	{
		s1[i + offset] = s2[i];
	}
	
	s1[offset + i] = '\0';
	return (s1);
}
