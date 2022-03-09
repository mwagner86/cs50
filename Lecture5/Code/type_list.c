/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:38:56 by mwagner           #+#    #+#             */
/*   Updated: 2022/03/09 15:40:13 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int			number;
	struct node	*next;
}	t_node;

int	main(void)
{
	t_node	*list;
	t_node	*n;
	t_node	*tmp;

	list = NULL;
	n = malloc(sizeof(t_node));
	if (n == NULL)
		return (1);
	n->number = 1;
	n->next = NULL;
	list = n;
	n = malloc(sizeof(t_node));
	if (n == NULL)
	{
		free(list);
		return (1);
	}
	n->number = 2;
	n->next = NULL;
	list -> next = n;
	n = malloc(sizeof(t_node));
	if (n == NULL)
	{
		free(list->next);
		free(list);
		return (1);
	}
	n->number = 3;
	n->next = NULL;
	list->next->next = n;
	for (t_node * tmp = list; tmp != NULL; tmp = tmp->next)
	{
		printf("%i\n", tmp->number);
	}
	while (list != NULL)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
}
