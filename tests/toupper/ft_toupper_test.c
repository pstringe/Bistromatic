/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 13:12:10 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/29 14:52:06 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_toupper_test.h"

int		main(void)
{
	int		i;
	char	c1;
	char  	c2;

	i = -1;
	while (++i <= 122)
	{
		c1 = toupper(i);
		c2 = ft_toupper(i);
		if(c1 == c2)
		{
			printf("input:\t\t%c\ntoupper:\t%c\nft_toupper:\t%c\n\n", i, toupper(i), ft_toupper(i));
		}
	}
	printf("----end----");
}
