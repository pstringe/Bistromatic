/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 15:09:35 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/12 15:46:04 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int		main(int argc, char **argv)
{
	char		*res;

	if (argc == 2)
	{
		res = ft_strtrim(argv[1]);
		printf("result:\t%s\n", res);
	}	
}
