/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodeutil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 04:48:00 by yjoo              #+#    #+#             */
/*   Updated: 2022/04/21 04:48:00 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*new_node(int data)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	node_push(t_stack *list, int data)
{
	t_node	*new;
	
	new = new_node(data);
	if (list->head == NULL)
	{
		list->head = new;
		new->next = new;
		new->prev = new;
	}
	else
	{
		new->prev = list->head->prev;
		new->next = list->head;
		list->head->prev->next = new;
		list->head->prev = new;
	}
	list->size++;
}

void	node_pop(t_stack *list)
{
	t_node	*cur;

	cur = list->head;
	if (list->head == NULL)
		return ;
	if (list->head->next == list->head)
		list->head = NULL;
	else if (list->head->next == list->head->prev)
	{
		cur = list->head->prev;
		list->head->next = list->head;
		list->head->prev = list->head;
	}
	else
	{
		cur = list->head->prev;
		list->head->prev = list->head->prev->prev;
		list->head->prev->next = list->head;
	}
	free(cur);
	list->size--;
}
