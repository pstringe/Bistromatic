/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:34:25 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/27 11:53:31 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c);

int		main(void)
{
	int i;
	int ft;
	int re;

	i = 100;
	while (++i <= 172)
	{
		re = isalpa(i);
		ft = ft_isalpha(i);	
		printf("input:\t%d\nis_apla:\t%d\n ft_isalpha\t%d\n\n", i, re, ft);
	}
}
