/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 10:04:47 by pstringe          #+#    #+#             */
/*   Updated: 2018/04/02 21:48:03 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"
#include <stdlib.h>

/*
**	so my goal is to utilize the same method utilized by python to store an arbitratily large
**	integer. The solution described in the artical is to represent the int as an array of digits
**	this sounds similar to the method I just attempted with linked lists, but I'm going to attempt
**	to follow the python code very closely
*/

/*
**	acording to the code, the first step is to convert the number from base 10 (or in my case, 
**	base whatever) to bas 2^30. Each element represents a digit from 0 to 2 ^30. I'll go ahead 
**	and use use 32 bit integers with 30 bits representing the digits
*/

typedef struct		*s_bi
{
	int			sign;
	int			size;
	t_list		*val;
}					t_bi;


t_bi	*split_nbr(char *str)
{
	s_bi	*nbr;
	t_list	*nb
	int		n;
	int		i;
	int		j;

	nb = NULL;
	nbr = ft_memalloc(sizeof(t_bi));
	nbr->sign = (*str == '-') ? -1 : 1;
	i = -1;
	while (str[++i]);
	j = i;
	while (i >= 0)
	{
		while (--j >= 0 && i - j < 9)
			j--;
		n = ft_atoi(str[j]);
		ft_lstadd(&nb, ft_lstnew((void*)&n, sizeof(int)));
		i = j;
		str[i] = '\0';
	}
	nbr->size = ft_lstlen(nb);
	nbr->val = val;
	return (nbr);
}
