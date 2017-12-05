/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:36:40 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/04 19:52:17 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char uc1;
	unsigned char uc2;

	if (n == 0)
	{
		return (0);
	}

	while (n-- > 0 && *s1 == *s2)
	{
		if (n == 0 || *s1 == '\0')
		{
			return (0);
		}
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
