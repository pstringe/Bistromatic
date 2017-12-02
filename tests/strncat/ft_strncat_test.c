/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:52:33 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/01 15:55:47 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncat_test.h"


int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("invalid number of arguments.\nmust supply only 1 argument.");
	}
	else
	{
		int		res;
		char	s1[100];
		char	*s2 = argv[1];
		size_t	len;

		len = 7;
		res	= strcmp(strncat(s1, s2, len), ft_strncat(s1, s2, len));
		printf("string1:\t%s\nstring2:\t%s\nstrncat:\t\t%s\nft_strncat:\t%s\nresult:\t%d\n", s1, s2, strncat(s1,s2, len), ft_strncat(s1, s2, len), res);
	}
	return (0);
}
