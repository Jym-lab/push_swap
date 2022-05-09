/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:44:40 by yjoo              #+#    #+#             */
/*   Updated: 2022/05/04 16:44:40 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	sort_check(t_node *list)
{
	t_node	*cur;

	if (list->next == list && list->prev == list)
		return (0);
	cur = list;
	while (cur->next != list)
	{
		if (cur->data > cur->next->data)
			return (1);
		cur = cur->next;
	}
	return (0);
}

static int	duplicate_check(t_node *list)
{
	t_node	*cur;
	t_node	*tmp;

	if (list->next == list && list->prev == list)
		return (1);
	cur = list;
	while (cur->next != list)
	{
		tmp = cur->next;
		while (tmp->next != cur)
		{
			if (cur->data == tmp->data)
				return (0);
			tmp = tmp->next;
		}
		if (cur->data == tmp->data)
			return (0);
		cur = cur->next;
	}
	return (1);
}

int	check_stack(t_stack *a)
{
	if (!duplicate_check(a->head))
		return (error_msg());
	if (!sort_check(a->head))
		return (0);
	return (1);
}
