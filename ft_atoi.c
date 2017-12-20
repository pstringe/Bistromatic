/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 19:11:53 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/20 13:01:08 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_whitespace(int c)
{
	if (c == '\n' || c == '\v' || c == '\f')
	{
		return (1);
	}
	if (c == ' ' || c == '\r' || c == '\t')
	{
		return (1);
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	int i;
	int nb;
	int flag;

	i = 0;
	nb = 0;
	flag = 0;
	while (ft_is_whitespace(str[i]))
		i++;
	if (str[i] == '-')
		flag = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + str[i] - '0';
		i++;
	}
	if (flag == 1)
	{
		return (-nb);
	}
	return (nb);
}
