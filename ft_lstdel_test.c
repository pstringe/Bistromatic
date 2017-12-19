/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 21:42:19 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/18 22:15:02 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	char const *content;
	t_list		*node;
	if (argc != 2)
	{
		return (-1);
	}

	/*define node content*/
	content = *(argv + 1);
	content_size = strlen(argv + 1);
	/*create node from previously defined content*/
	node = ft_lstnew(content, content_size);
	/*display contents of node upon succesful allocation*/
	if(node)
	{
		printf("adress:\t%p\ncontent:\t%s\ncontent size:\t\n\n", node, node->content, node->content_size);
	}
	/*delete node using ft_lstdel while passing in a pointer to ft_memdel*/
	ft_lstdel(node, ft_memdel);
	/*display a success message if the struct points to a null location in memory*/
	if(!null)
	{
		printf("SUCCESS!");
	}
	else
	{
		printf("SHAME!");
	}	
	return (0);
}
