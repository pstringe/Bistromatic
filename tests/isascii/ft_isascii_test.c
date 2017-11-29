/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:37:42 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/29 12:26:28 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isascii_test.h"

int		main(void)
{
	int i;
	int ft;
	int re;

	i = -1;
	while (++i <= 255)
	{
		re = isascii(i);
		ft = ft_isascii(i);
		if (re || !re)
		{
			printf("input:\t\t%d\nisascii:\t%d\nft_isascii\t%d\n\n", i, re, ft);
		}
	}
	printf("----end----");
	return (0);
}
