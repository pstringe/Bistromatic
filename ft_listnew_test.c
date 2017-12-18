/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listnew_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 11:45:45 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/18 15:13:20 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#define		LINK_INFO		address:\t%p\ncontent:\t%s\ncontent_size
#define		CONTENT			link.content
#define		CONTENT_SIZE	link.content_size

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		return (0);
	}
	t_list		link;
	void const *content;
	size_t		content_size;
	void const *resulting_content;
	size_t		resulting_content_size;

	content = argv[1];
	content_size = ft_strlen(content);
	link = *ft_lstnew(content, content_size);

	resulting_content = link.content;
	resulting_content_size = link.content_size;

	if((memcmp(content, resulting_content, resulting_content_size)) && content_size == resulting_content_size)
	{
		printf("SUCCESS!\n");
		printf("address:\t%p\ncontent:\t%s\ncontent_size:\t%zu\n\n", &link, CONTENT, CONTENT_SIZE);
	}
	else
	{
		printf("SHAME!!!\n");
		printf("adress:\t%p\ncontent:\t%s\ncontent_size:\t%zu\n\n", &link ,CONTENT, CONTENT_SIZE);
	}
	return (0);
}
