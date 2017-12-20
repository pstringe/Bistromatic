/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstringe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 13:33:23 by pstringe          #+#    #+#             */
/*   Updated: 2017/12/19 17:28:35 by pstringe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

#define		NODE			node
#define		CONTENT			node->content
#define		CONTENT_SIZE	node->content_size
#define		NEXT			node->next
#define		NODES(x)		*(array_of_nodes + x) 	
#define		CURRENT_NODE(x)	array_of_nodes[i + x]

/*The purpose of this funtion is to display the contents of  list node*/
static void	ft_display_node(t_list *node)
{
	printf("address:\t%p\ncontent:\t%scontent_size:\t%zu\nnext:\t%p\n", NODE, CONTENT,CONTENT_SIZE, NEXT);
}

/*The purpose of this funtion is to itterate through the list 
 * and display the contents of each node*/
static void ft_display_list(t_list **list)
{
	while(*list)
	{
		ft_display_node(*list);
		*list = *list->next;
	}
}

/*the purpose of this test is simply to print information about every node in the linked list both before and after operating on it*/
int		main(int argc, char **argv)
{
	/*first i want to use the strings provided as args to create several nodes
	 * for simplicity's sake I will start by creating three*/
	if (argc != 4)
	{
		return (-1);
	}

	int		i;
	void	*content;
	size_t	content_size;

	t_list	**HEAD;
	t_list	*node_1;
	t_list	*node_2;
	t_list	*node_3;

	node_1 = NULL;
	node_2 = NULL;
	node_3 = NULL;
	HEAD = NULL;

	t_list	**array_of_nodes;
	array_of_nodes[0] = node_1;
	array_of_nodes[1] = node_2;
	array_of_nodes[2] = node_3;

	/*I will now itterate over the array of arguments and for each arg I will
	 * create allocate a new node with the string as the content*/
	i = 0;
	while (++i < argc)
	{
		/*obtain content_size for node*/
		content_size = ft_strlen(argv[i]) + 1;

		/*use content_size to allocate sufficient space for content*/
		content = ft_strnew(content_size + 1);

		/*copy content from the current index of argv to the location pointed
		 * to by content*/ 
		ft_memcpy(content, argv[i], content_size);
		
		/*allocate new node using content and content size*/
		CURRENT_NODE(-1) = ft_lstnew(content, content_size);

		/*each time this happens, I want to display the adress of the node and its
		 * contents to verify the allocations copying and assignments were succesful*/
		ft_display_node(CURRENT_NODE(-1));

		/*we'll see about freeing content later, but for now lets move on to the actual operation*/
	}
	/*display message as an indicator that the node creation is finished*/
	printf("node creation is finished");

	/*assign HEAD reference*/
	HEAD = &NODES(0);
	
	/*begin linking the nodes using ft_lstadd(), display the status of the list
	 * after each operation*/
	i = 0;
	while (++i < 2)
	{
		ft_lstadd(HEAD, CURRENT_NODE(0));
		ft_display_list(HEAD);
	}
	return (0);
}

