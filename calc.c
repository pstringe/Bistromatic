/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 10:04:47 by pstringe          #+#    #+#             */
/*   Updated: 2018/04/04 18:49:56 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"
#include <stdlib.h>

int		main(int argc, char **argv)
{
	double		result;

	if (argc == 2)
	{
		g_x = argv[1];
		result = parse_sum();
		printf("%f\n", result);
	}
	write(1, "\n", 1);
	return (0);
}
