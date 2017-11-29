/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:37:42 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/28 16:39:31 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isprint_test.h"

int		main(void)
{
	int i;
	int ft;
	int re;

	i = 33;
	while (++i <= 255)
	{
		re = isprint(i);
		ft = ft_isprint(i);
		if (re != ft)
		{
			printf("input:\t\t%d\nisprint:\t%d\nft_isprint\t%d\n\n", i, re, ft);
		}
	}
	printf("----end----");
	return (0);
}
