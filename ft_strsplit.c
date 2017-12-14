/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:11:48 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/13 16:36:06 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_find_str(const char *s, int d)
{
	int i;
	
	//move pointer to the beginning of the string
	while(*s && *s == d)
	{
		s++;
	}
	//iterrate until hit the next delimeter
	i = 0;
	while( *s && *s != d)
	{
		s++;
		i++;
	}
	return(i);
}

int		main(int argc, char **argv)
{
	int res;
	if (argc == 2)
	{
		res = ft_find_str(argv[1], ' ');
		printf("result:\t%d\n", res);
	}
}
