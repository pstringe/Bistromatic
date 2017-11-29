/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:37:42 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/28 16:07:18 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isdigit_test.h"

int		main(void)
{
	int i;
	int ft;
	int re;

	i = 33;
	while (++i <= 127)
	{
		re = isdigit(i);
		ft = ft_isdigit(i);
		if (re != ft)
		{
			printf("input:\t\t%d\nis_digit:\t%d\nft_is_digit\t%d\n\n", i, re, ft);
		}
	}
	printf("----end----");
	return (0);
}
