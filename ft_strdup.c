/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 11:55:56 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/30 12:17:23 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strdup.h"

char	*ft_strdup(const char *str)
{
	char	*dest;

	dest = (char*)malloc(sizeof(str));
	dest = ft_strcpy(dest, str);
	return(dest);
}
