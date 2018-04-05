/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 10:04:47 by pstringe          #+#    #+#             */
/*   Updated: 2018/04/04 19:40:39 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"

int		main(int argc, char **argv)
{
	double		result;

	if (argc == 2)
	{
		g_x = argv[1];
		skip_whitespace();
		result = parse_sum();
		printf("%f\n", result);
	}
	write(1, "\n", 1);
	return (0);
}
