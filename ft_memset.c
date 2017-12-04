/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 17:41:43 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/03 18:12:20 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char *unsigned_b = b;
	unsigned char unsigned_c = c;
	
	while (n-- != 0)
	{
		*unsigned_b++ = unsigned_c;
	}
	return(b);
}
