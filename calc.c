/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 10:04:47 by pstringe          #+#    #+#             */
/*   Updated: 2018/04/04 10:10:59 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"
#include <stdlib.h>

int		parse_sum();
int		parse_product();
int		parse_factor();

/*
**	this global var points to current position inside the string being parsed
**	for some reason the author of the tutorial I'm going off of felt the need to 
**	make it global. I will remedy this at a later time.
*/

char	*g_x;

/*
**	this function is responsible for decting a didgit and transforming it into an integer,
**	this first version will only work with single digits, but the goal is, to eventually 
**	parse numbers of any size and transform them into a bignum struct. 
*/

int		parse_factor()
{
	if (*g_x >= '0' && *g_x <= '9')
		return (*g_x++ - '0'); // we return the current index, and increment the pointer if *x is a digit
	else
	{
		ft_putendl("digit expected, found: ");
		ft_putchar(*g_x);
	}
	return (-1);
}


int		main()
{
	int		result;

	g_x = "2*3+5";
	result = parse_factor();
	return (0);
}
