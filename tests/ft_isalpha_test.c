/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:34:25 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/27 15:43:38 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isalpha_test.h"
//#include <stdio.h>
//#include <ctype.h>

//int		ft_isalpha(int c);

int		main(void)
{
	int	 i;
	int ft;
	int re;

	i = 64;
	while (++i <= 127)
	{
		re = isalpha(i);
		ft = ft_isalpha(i);
		if(re != ft)
		{	
			printf("input:\t\t%d\nis_alpha:\t%d\nft_isalpha\t%d\n\n", i, re, ft);
		}
	}
	printf("----end----");
}
