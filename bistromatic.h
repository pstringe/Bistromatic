/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bistromatic.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 09:48:45 by pstringe          #+#    #+#             */
/*   Updated: 2018/04/04 18:43:25 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BISTROMATIC_H
# define BISTROMATIC_H
#include "libft.h"
#include <stdio.h>

/*
**	this global var points to current position inside the string being parsed.
**	this variable is global because it is neccessary for each function to
**	increment the pointer. There are other ways to do this, but this method is actually very
**	convenient, I believe I could justify it, should I choose to use this method.
*/

char	*g_x;

/*
**	arithmetic parse functions, call eacthother appropriatly to maintain operator precedence
*/

double		parse_sum();
double		parse_product();
double		parse_factor();
double		parse_number();

#endif
