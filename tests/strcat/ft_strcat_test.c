/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:52:33 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/30 16:08:29 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcat_test.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("invalid number of arguments.\nmust supply only 1 argument.");
	}
	else
	{
		char s1[10];
		printf("string1 before:\t%s\n", s1);
		char *s2 = argv[1];
		printf("string1:\t%s\nstring2:\t%s\nstrcat:\t\t%s\nft_strcat:\t%s\n", s1, s2, strcat(s1,s2), ft_strcat(s1, s2));	
	}
	return (0);
}
