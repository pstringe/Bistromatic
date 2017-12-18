/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 10:04:42 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/18 10:27:14 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*strnew(int neg, size_t size)
{
	char *str;
	if (str = (char *)malloc(sizeof(char) * size + 1))
	{
		if (neg)
		{
			str[0] = '-';
		}
		str[size] = '\0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				neg;
	int				len;
	int				i;
	unsigned int	j;

	neg = 0;
	if (n < 0)
	{
		neg = 1;
	}
	len = ftnbrlen(n) + neg;
	j = ft_absint(n);
	if(str = str_new(neg, (size_t)len))
	{
		i = len -1;
		while (i >= neg)
		{
			str[i] = (char)(j % 10) + 48);
			j = j / 10;
			i--;
		}
	}
	return (str);
}
