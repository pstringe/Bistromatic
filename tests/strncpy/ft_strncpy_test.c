/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 15:56:52 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/29 18:35:19 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_strncpy_test.h"

int		main(int argc, char **argv)
{
	char 	dest[10];
	int		res;
	int		i;

	i = 0;
	while (++i < argc)
	{
		res = strcmp(strncpy(dest, argv[i], sizeof(dest)), ft_strncpy(dest, argv[i], sizeof(dest)));
		printf("src:\t\t%s\nstrncpy:\t%s\nft_strncpy:\t%s\nresult:\t\t%d\n\n", argv[i], strncpy(dest, argv[i], sizeof(dest)), ft_strncpy(dest, argv[i], sizeof(dest)), res);
	}
}
