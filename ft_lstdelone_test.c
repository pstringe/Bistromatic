/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 11:45:45 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/18 20:14:54 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#define		LINK_INFO		address:\t%p\ncontent:\t%s\ncontent_size
#define		CONTENT			link->content
#define		CONTENT_SIZE	link->content_size

static void 	ft_delete_content(void **content, size_t content_size)
{
	free(*content);
//	free(content_size);

	*content = NULL;
	content_size = 0;
}

int				main(int argc, char **argv)
{
	if (argc != 2)
	{
		return (0);
	}
	t_list	   *link;
	void const *content;
	size_t		content_size;
//	void const *resulting_content;
//	size_t		resulting_content_size;

	/*declare a node*/
	content = argv[1];
	content_size = ft_strlen(content);
	link = ft_lstnew(content, content_size);

	printf("BEFORE");	
	printf("adress:\t%p\ncontent:\t%s\ncontent_size:\t%zu\n\n", &link, CONTENT, CONTENT_SIZE);

	ft_lstdelone(&link, ft_delete_content);	
	
	if (!(CONTENT || CONTENT_SIZE))
	{
		printf("You took her for banging!");
	}
	else
	{
		printf("AFTER");
		printf("adress:\t%p\ncontent:\t%s\ncontent_size:\t%zu\n\n", &link ,CONTENT, CONTENT_SIZE);
	}
	return (0);
}
