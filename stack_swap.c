/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:36:45 by yjoo              #+#    #+#             */
/*   Updated: 2022/05/06 15:36:45 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_node *list)
{
	int	tmp;

	if (list->next == list && list->prev == list)
		return ;
	tmp = list->data;
	list->data = list->next->data;
	list->next->data = tmp;
}

void	sa(t_stack *a)
{
	ft_swap(a->head);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack *b)
{
	ft_swap(b->head);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *a, t_stack *b)
{
	ft_swap(a->head);
	ft_swap(b->head);
	ft_putstr_fd("ss\n", 1);
}
