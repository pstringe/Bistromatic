/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 18:47:06 by pstringe          #+#    #+#             */
/*   Updated: 2018/04/04 19:44:33 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"

void		skip_whitespace()
{
	while (*g_x == '\t' || *g_x == '\n' || *g_x == ' ')
		g_x++;
}

/*
**	One step toward bignum functionality is to add multi-digit functionality. This function
**	is called by parse_factor() to multidigit nums from the string, eventually this function
**	will most likley be replaced by a parse bignum function.
*/

double		parse_number()
{
	double n;
	double w;
	double s;

	n = 0;
	while (*g_x >= '0' && *g_x <= '9')
	{
		n *= 10;
		n += *g_x - '0';
		g_x++;
	}
	if (*g_x == '.')
	{
		++g_x;
		w = 1;
		while (*g_x >= '0' && *g_x <= '9')
		{
			w /= 10;
			s = (*g_x - '0') * w;
			n += s;
			g_x++;
		}
	}
	return (n);
}

/*
**	this function is responsible for decting a didgit and transforming it into an integer,
**	this first version will only work with single digits, but the goal is, to eventually 
**	parse numbers of any size and transform them into a bignum struct.
**	---------------------------------------------------------------------
**	
**	in order to parse parenthetic expressions, one must redefine what a factor can be.
**	if the pointer encounters and opening grouping symbol, the parser must be ready to 
**	parse an arbitrarily complex expression, in order of operator precedence, starting i
**	with the most loosley bound evaluation function.
*/

double		parse_factor()
{
	double		sum;

	if (*g_x >= '0' && *g_x <= '9')
		return (parse_number());
	else if (*g_x == '(')
	{
		++g_x;
		skip_whitespace();
		sum = parse_sum();
		++g_x;
		skip_whitespace();
		return (sum);
	}
	else
	{
		ft_putstr("parse error! digit expected, found: ");
		ft_putchar(*g_x);
		ft_putchar('\n');
	}
	return (-1);
}

/*
**	parses products based on the next value being a multiplicationn operator. If no operator, just returns the number.
**	this allows us to establish operator precedence by calling the product function from the sum function. That way, if 
**	there is something to multiply, that will be done first, and then addition. Later, instead of just multiplying, 
**	We'll call our bignum multiplication function.
*/

double		parse_product()
{
	double 	f_1;
	double	f_2;
	char 	op;

	f_1 = parse_factor();
	skip_whitespace();
	while (*g_x == '*' || *g_x == '/' || *g_x == '%')
	{
		op = *g_x;
		++g_x;
		skip_whitespace();
		f_2 = parse_factor();
		if (op  == '*')
			f_1 *= f_2;
		else if (op == '/')
			f_1 /= f_2;
		else if (op == '%')
			ft_putendl("parse error: modulo not supported in this version");
	}
	return (f_1);
}

/*
**	parse sum will calls the parse_product function to get its two addends, garanteeing numbers 
**	to work with so long as the string is valid. Again, the logic is the same here but we will 
**	call a bignum addition function in the final function.
*/

double		parse_sum()
{
	double 	p_1;
	double 	p_2;
	char	*op;

	p_1 = parse_product();
	skip_whitespace();
	while (*g_x == '+' || *g_x == '-')
	{
		op = g_x;
		++g_x;
		skip_whitespace();
		p_2 = parse_product();
		if (*op == '-' && *(op + 1) != '(' && p_2 < 0)
			ft_putendl("parse error: bc does not subtracton of negative values without parentheses");
		else if (*op == '+')
			p_1 += p_2;
		else if (*op == '-')
			p_1 -= p_2;
	}
	return (p_1);
}
