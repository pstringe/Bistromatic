/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 15:56:52 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/29 16:53:41 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_strcpy_test.h"

int		main(int argc, char **argv)
{
	char 	dest[10];
	int		res;
	int		i;

	i = 0;
	while (++i < argc)
	{
		res = strcmp(strcpy(dest, argv[i]), ft_strcpy(dest, argv[i]));
		printf("src:\t\t%s\nstrcpy:\t\t%s\nft_strcpy:\t%s\nresult:\t\t%d\n\n", argv[i], strcpy(dest, argv[i]), ft_strcpy(dest, argv[i]), res);
	}
}
