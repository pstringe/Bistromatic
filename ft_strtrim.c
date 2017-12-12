/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 16:57:08 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/11 19:29:02 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_whitespace(char c)
{
	if(c == '\t' || c == '\n' || c == ' ')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

static size_t		*find_start_and_end_indecies(const char *s)
{
	size_t		start;
	size_t		end;
	size_t		*start_and_end_indecies;
	
	start_and_end_indecies = (size_t *)ft_memalloc(sizeof(size_t) * 2);
	start = 0;
	end = ft_strlen(s);
	//increment and decrement start and end indecies while the position they refer to within str is a whiitespace char
	while(ft_is_whitespace(*(s + start)) || ft_is_whitespace(*(s + end)))
	{
		if(ft_is_whitespace(*(s + start)))
		{
			start++;
		}
		else if(ft_is_whitespace(*(s + end)))
		{
			end--;
		}
	}
	*start_and_end_indecies = start;
	*(start_and_end_indecies + 1) = end;
	return (start_and_end_indecies);
}

char 	*ft_strtrim(char const *s)
{
	char 	*str;
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	*start_and_end_indecies;
	
	//the idea is to find start and end indecies within s which denote the beggining and 
	//end of the string I wish to allocate and return
	start_and_end_indecies = find_start_and_end_indecies(s);
	start = *start_and_end_indecies;
	end = *(start_and_end_indecies + 1);
	len = (end + 1) - start;

	//allocate new string
	str = ft_strnew(len + 1);
	//move memory from the start index of s, for len bytes, to the new string
	ft_memmove(str, s + start, len);
	return (str);
}

