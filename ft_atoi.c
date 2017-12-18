/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 19:11:53 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/18 09:29:27 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int nb;
	int flag;

	i = 0;
	nb = 0;
	flag = 0;
	while ((str[i] == '\n') || (str[i] == '\v') || (str[i] == '\f') || (str[i] == ' ') || (str[i] == '\r') || (str[i] == '\t'))
	{
		i++;
	}
	if (str[i] == '-')
	{
		flag = 1;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + str[i] - '0';
		i ++;
	}
	if (flag == 1)
	{
		return (-nb);
	}
	return (nb);
}
