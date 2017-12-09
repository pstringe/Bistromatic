/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 14:04:24 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/08 14:12:10 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char *s1 = "MZIRIBMZIRIBMZP";
	char *s2 = "MZIRIBMZP";
	char *i = ft_strstr(s1, s2);

	printf("%s", i);
	return (0);
}
