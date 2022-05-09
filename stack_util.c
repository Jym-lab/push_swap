/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:48:34 by yjoo              #+#    #+#             */
/*   Updated: 2022/05/06 15:18:02 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack(void)
{
	t_stack	*newstack;

	newstack = (t_stack *)malloc(sizeof(t_stack));
	newstack->head = NULL;
	newstack->size = 0;
	return (newstack);
}

void	stack_push(t_stack *stack, int data)
{
	t_node	*new;

	new = new_node(data);
	if (stack->head == NULL)
	{
		stack->head = new;
		new->next = new;
		new->prev = new;
	}
	else
	{
		new->next = stack->head;
		new->prev = stack->head->prev;
		stack->head->prev->next = new;
		stack->head = new;
	}
	stack->size++;
}

void	stack_pop(t_stack *stack)
{
	t_node	*cur;

	cur = stack->head;
	if (stack->head == NULL)
		return ;
	if (stack->head->next == stack->head)
		stack->head = NULL;
	else if (stack->head->next == stack->head->prev)
	{
		cur = stack->head;
		stack->head = stack->head->next;
		stack->head->next = stack->head;
		stack->head->prev = stack->head;
	}
	else
	{
		cur = stack->head;
		stack->head = stack->head->next;
		stack->head->prev = cur->prev;
		stack->head->prev->next = stack->head;
	}
	free(cur);
	stack->size--;
}
