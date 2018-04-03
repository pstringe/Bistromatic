/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 10:04:47 by pstringe          #+#    #+#             */
/*   Updated: 2018/04/03 11:55:19 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"
#include <stdlib.h>

typedef	struct		*s_master
{
	int		base;
}					t_m;

typedef struct		*s_bn
{
	unsigned char	*dig;
	int				size;
}					t_bn;

/*
t_bi	*split_nbr(char *str)
{
	s_bi	*nbr;
	t_list	*nb
	int		n;
	int		i;
	int		j;

	nb = NULL;
	nbr = ft_memalloc(sizeof(t_bi));
	nbr->sign = (*str == '-') ? -1 : 1;
	i = -1;
	while (str[++i]);
	j = i;
	while (i >= 0)
	{
		while (--j >= 0 && i - j < 9)
			j--;
		n = ft_atoi(str[j]);
		ft_lstadd(&nb, ft_lstnew((void*)&n, sizeof(int)));
		i = j;
		str[i] = '\0';
	}
	nbr->size = ft_lstlen(nb);
	nbr->val = val;
	return (nbr);
}
*/
/*

*/

void	put_bn(t_bn *n)
{
	int	i;

	if (n->sig == -1)
		ft_putchar('-');
	i = n->lst;
	while (i-- >= 0)
		ft_putchar((n->dig)[i] + '0')
	ft_putchar("\n");
}
/*
void	get_and_print_test(char *str)
{
}
*/

/*
**	this will substitute the digits within a string for ordered 
**	values it will work up to base 255, bc supports an ibase of 0 - 16
**	if for some reason I discover I need to accomodate larger bases, 
**	I'll just use a larger data-type.
*/

int		format_sign(char **bnstr)
{
	char 	*tmp;
	int		n;

	n = 1;
	tmp = *bnstr;
	if (tmp == '-')
	{
		tmp = ft_strdup(++*bnstr);
		n = -1;
	}
	*bnstr = tmp;
	return (n);
}

unsigned char	*format_base(char *base, char **bnstr)
{
	unsigned char 	*nbase;
	unsigned char 	i;
	int				t;
	unsigned char	*nstr;

	i = -1;
	t =  1;
	nstr = *bnstr;
	nbase = ft_memalloc(sizeof(unsigned char) * 256);
	while (++i < 256)
		nbase[i] = ((t = !base[(int)i]) && t) ? i : '\0';
	i = -1;
	while(nstr[++i])
	{
		j = -1;
		while (base[++j])
			nstr[i] = (nstr[i] == base[j]) ? nbase[j] : nstr[i];
	}
	return (nbase);
}


void	atobn(char *base, char *bnstr)
{
	t_bn	*nbr;
	int		n;
	
	nbr = ft_memalloc(sizeof(t_nbr*));
	nbr->sig = format_sign(&bnstr);
	nbr->size = ft_strlen(bnstr);
	nbr->base = format_base(&bnstr);
}

/*
void	base_to_max(char *bnstr, int base, t_bn	*bn)
{
	int		i;
	int		n;

	i = -1;
	while (bnstr[++i])
	{
				
	}
}
*/

void	
int		main(int argc, char **argv)
{
	if(argc == 2)
	{
		
	}
	return (0);
}
