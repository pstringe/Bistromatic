/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 16:57:08 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/12 15:56:59 by pstringe         ###   ########.fr       */
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

static int		*find_start_and_end_indecies(const char *s)
{
	int		start;
	int		end;
	int		*start_and_end_indecies;
	
	if (!(start_and_end_indecies = (int *)ft_memalloc(sizeof(int) * 2)))
	{
		return(NULL);
	}
	start = 0;
	end = ft_strlen(s) - 1;
	//increment and decrement start and end indecies while the position they refer to within str is a whiitespace char
	while(ft_is_whitespace(*(s + start)) || ft_is_whitespace(*(s + end)) || start == end)
	{
		if(start >= end && ft_is_whitespace(start))
		{
			*start_and_end_indecies = -1;
			*(start_and_end_indecies + 1 ) = -2;
		}
		if(ft_is_whitespace(*(s + start)))
		{
			start++;
		}
		if(ft_is_whitespace(*(s + end)))
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
	int		start;
	int		end;
	int		len;
	int		*start_and_end_indecies;
	
	//the idea is to find start and end indecies within s which denote the beggining and 
	//end of the string I wish to allocate and return
	start_and_end_indecies = find_start_and_end_indecies(s);
	start = *start_and_end_indecies;
	end = *(start_and_end_indecies + 1);
	len = (end + 1) - start;
	//if the string is blank return an empty string
/*	if(len == -1)
	{
		return("");
	}*/
	//allocate new string
	str = ft_strnew(len + 1);
	//move memory from the start index of s, for len bytes, to the new string
	ft_memmove(str, s + start, len);
	return (str);
}

