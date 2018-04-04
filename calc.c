/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 10:04:47 by pstringe          #+#    #+#             */
/*   Updated: 2018/04/04 11:29:48 by pstringe         ###   ########.fr       */
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
**	--------------------------------------------------------------------------
**	
**	Now I understand that this variable is global because it is neccessary for each function to
**	increment the pointer. There are other ways to do this, but this method is actually very
**	convenient, I believe I could justify it, should I choose to use this method.
*/

char	*g_x;

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

int		parse_factor()
{
	int		sum;

	if (*g_x >= '0' && *g_x <= '9')
		return (*g_x++ - '0'); 	// we return the current index, and increment the pointer if *x is a digit
	else if (*g_x == '(')
	{
		++g_x;					//consume opener
		sum = parse_sum();		//here sum will eventually return the evaluation results terminal values through 
								//to recursive calls to itself, via other parsing functions.
		++g_x;					//here we automatically consume the closing paren for simplicity, in final version,
								//error checking will be vital to make sure this is a closing paren.
		return (sum);
	}
	else
	{
		ft_putstr("digit expected, found: ");
		ft_putchar(*g_x);
		ft_putchar('\n');
	}
	return (-1);
}

/*
**	parses products based on the next value being a multiplicationn operator. If no operator, just returns the number.
**	this allows us to establish operator precedence by calling the product function from the sum function. That way, if 
**	there is something to multiply, that will be done first, then addition. Later, instead of just multiplying, W'ell call
**	our bignum multiplication operator.
*/

int		parse_product()
{
	int f_1;
	int	f_2;

	f_1 = parse_factor();
	while (*g_x == '*')
	{
		++g_x;
		f_2 = parse_factor();
		f_1 *= f_2;
	}
	return (f_1);
}

/*
**	parse sum will calls the parse_product function to get its two addends, garunteeing numbers 
**	to work with so long as the string is valid. Again, the logic is the same here but we will call a bignu, 
**	addition function in the final function.
*/

int		parse_sum()
{
	int p_1;
	int p_2;

	p_1 = parse_product();
	while (*g_x == '+')
	{
		++g_x;
		p_2 = parse_product();
		p_1 += p_2;
	}
	return (p_1);
}

/*
**
**
*/

int		main()
{
	int		result;

	g_x = "2*(3+4)";
	result = parse_sum();
	ft_putnbr(result);
	return (0);
}
