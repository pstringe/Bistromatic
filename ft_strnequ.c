/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:36:40 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/11 13:52:30 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s1 && !s2)
	{
		return (1);
	}
	else if (n == 0 || (!s1 && s2) || (!s2 && s1))
	{
		return (0);
	}

	while (*(s1 + i) == *(s2 + i) && *(s1 + i) && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (1);
	}
	return (0);
}
