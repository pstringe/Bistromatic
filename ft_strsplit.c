/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:11:48 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/17 18:57:23 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*the purpose of this function is to return the number of words in the input string. this number is useful for allocating an array of pointers such that each pointer within the array points to a string that contains a copy of a word found within the input*/
static int	ft_word_count(const char *s, char c)
{
	int flag;
	int word;

	flag = 0; /*this variable is used to indicate wheather it is a 
	word or a set of a delimiter charaters currently being traversed 
	over*/
	word = 0; /*this variable keeps track of the number of words in 
	the string*/

	/*this is mearly a check to determine that the input is valid and 
	 * not null*/
	if (!s || !c)
	{
		return (0);
	}

	/*here we begin a loop which itterates over each character in the
	 string.*/
	while (*s)
	{
		/*each of the following two conditions will execute if the value 
		 being pointed to by s is equal to the value of the delimiter 
		 character but the vital difference is with the value of the 
		 flag variable. During the first itteration the value of the flag
		 variable is 0 so the first condition will not execute regardless
		 of the value of the pointer. The next condition will execute, 
		 if and only if the value of the pointer is equal to the 
		 value of the delimeter character.*/
		if (*s == c && flag == 1)
		{
			flag = 0;
		}
		/*when the second condition executes the flag variable will be 
		 * set to 1 as an indicator that we are */
		if (*s != c && flag == 0)
		{
			flag = 1;
			word++;
		}
		s ++;
	}
	return (word);
}

static int	ft_wlen(const char *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		nb_words;
	char	**array;

	i = 0;
	nb_words = ft_word_count((const char *)s, c);
	array = (char **)malloc(sizeof(*array) * (nb_words + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	while (nb_words--)
	{
		while (*s == c && *s != '\0')
		{
			s++;
		}
		array[i] = ft_strsub((const char *)s, 0, ft_wlen((const char *)s, c));
		s = s + ft_wlen((const char *)s, c);
		i++;
	}
	array[i] = NULL;
	return (array);
}

/*
int		*ft_find_str(const char *s, int d)
{
	int 	i;
	int		j;
	int 	*res;

	res = ft_memalloc(sizeof(int) * 2);
	if (!s)
	{
		*res = -1;
		*(res + 1)  = -1;

		return(res);
	}
	//move pointer to the beginning of the string
	j = 0;
	while(*s && *s == d)
	{
		j++;
		s++;
	}
	//iterrate until hit the next delimeter
	i = 0;
	while( *s && *s != d)
	{
		s++;
		i++;
	}
	*res = i;
	*(res + 1) = j;

	return(res);
}

int		main(int argc, char **argv)
{
	int 	*res;
	char	*str;

	res = malloc(sizeof(int) * 2);
	if (argc == 2)
	{
		res = ft_find_str(argv[1], ' ');
		if (*res >= 0)
		{
			str = ft_strnew(*res + 1);
			ft_memcpy(str, &argv[1][*(res + 1)], *res);
			printf("strlen:\t\t%d\ndelimlen:\t%d\nstring:\t\t%s\n\n", *res, *(res + 1), str);
		}
	}
}
*/
