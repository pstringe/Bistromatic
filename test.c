/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 15:09:35 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/11 15:31:07 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	char const 	*s1;
	char const 	*s2;
	char		*res;

	if (argc == 3)
	{
		s1 = *(argv + 1);
		s2 = *(argv + 2);

		res = ft_strjoin(s1, s2);
		printf("result:\t%s\n", res);
	}	
}
