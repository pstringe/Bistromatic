/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:11:48 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/13 17:17:32 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		*ft_find_str(const char *s, int d)
{
	int 	i;
	int		j;
	int 	*res;

	res = ft_memalloc(sizeof(int) * 2);
	if (!s)
	{
		*res = -1;
		*(res + 1)  = -1;

		return(res);
	}
	//move pointer to the beginning of the string
	j = 0;
	while(*s && *s == d)
	{
		j++;
		s++;
	}
	//iterrate until hit the next delimeter
	i = 0;
	while( *s && *s != d)
	{
		s++;
		i++;
	}
	*res = i;
	*(res + 1) = j;

	return(res);
}

int		main(int argc, char **argv)
{
	int 	*res;
	char	*str;

	res = malloc(sizeof(int) * 2);
	if (argc == 2)
	{
		res = ft_find_str(argv[1], ' ');
		if (*res >= 0)
		{
			str = ft_strnew(*res + 1);
			ft_memcpy(str, &argv[1][*(res + 1)], *res);
			printf("strlen:\t\t%d\ndelimlen:\t%d\nstring:\t\t%s\n\n", *res, *(res + 1), str);
		}
	}
}
