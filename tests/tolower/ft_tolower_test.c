/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 13:12:10 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/29 15:07:17 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tolower_test.h"

int		main(void)
{
	int		i;
	char	c1;
	char  	c2;

	i = -1;
	while (++i <= 122)
	{
		c1 = tolower(i);
		c2 = ft_tolower(i);
		if(c1 != c2)
		{
			printf("input:\t\t%c\ntolower:\t%c\nft_tolower:\t%c\n\n", i, tolower(i), ft_tolower(i));
		}
	}
	printf("----end----");
}
