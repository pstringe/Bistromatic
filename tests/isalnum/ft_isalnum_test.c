/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:37:42 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/28 17:15:38 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isalnum_test.h"

int		main(void)
{
	int i;
	int ft;
	int re;

	i = -1;
	while (++i <= 255)
	{
		re = isalnum(i);
		ft = ft_isalnum(i);
		if (re || !re)
		{
			printf("input:\t\t%d\nisalnum:\t%d\nft_isalnum\t%d\n\n", i, re, ft);
		}
	}
	printf("----end----");
	return (0);
}
