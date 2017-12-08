/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:06:31 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/08 13:09:59 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size)
{
	void	*memory;

	memory = (void *)malloc(size);
	if (memory == NULL)
	{
		return(NULL);
	}
	ft_memset (memory, 0, size);
	return(memory);
}
