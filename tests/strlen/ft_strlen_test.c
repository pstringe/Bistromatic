/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 12:44:42 by pstringe          #+#    #+#             */
/*   Updated: 2017/11/29 13:01:35 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen_test.h"

int		main(void)
{
	char *str1;
	char *str2;
	char *str3;

	str1 = "Kristina";
	str2 = "Isabella";
	str3 = "St.Denny";

	printf("strlen:\t\t%lu\nft_strlen:\t%d\n\n", strlen(str1), ft_strlen(str1));
	printf("strlen:\t\t%lu\nft_strlen:\t%d\n\n", strlen(str2), ft_strlen(str2));
	printf("strlen:\t\t%lu\nft_strlen:\t%d\n\n", strlen(str3), ft_strlen(str3));

	return (0);
}
