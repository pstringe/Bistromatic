/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 16:35:02 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/02 15:12:10 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = -1;
	while (src[++i] != '\0')
	{
		dst[i] = src[i];
	}

	dst[i] = '\0';
	return (dst);
}
