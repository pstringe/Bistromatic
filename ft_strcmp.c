/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:57:59 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/04 20:05:49 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char uc1;
	unsigned char uc2;

	while (*s1 != '\0' && *s1 == *s2)
	{
		s1 ++;
		s2 ++;
	}

	uc1 = (unsigned char)s1;
	uc2 = (unsigned char)s2;

	if (uc1 < uc2)
	{
		return (1);
	}
	else if (uc1 > uc2)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
