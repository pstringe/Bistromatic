/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 15:56:52 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/30 12:12:22 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_strdup_test.h"

int		main(int argc, char **argv)
{
	int		res;
	int		i;

	i = 0;
	while (++i < argc)
	{
		res = strcmp(strdup(argv[i]), ft_strdup(argv[i]));
		printf("src:\t\t%s\nstrdup:\t\t%s\nft_strdup:\t%s\nresult:\t\t%d\n\n", argv[i], strdup(argv[i]), ft_strdup(argv[i]), res);
	}
}
