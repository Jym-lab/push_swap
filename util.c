/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 06:33:34 by yjoo              #+#    #+#             */
/*   Updated: 2022/04/21 06:33:34 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node *cur;

	cur = stack->head;
	if (stack->head != NULL)
	{
		stack->head->prev->next = NULL;
		while (cur != NULL)
		{
			cur->prev = NULL;
			stack->head = cur->next;
			free(cur);
			cur = stack->head;
		}
	}
	free(stack);
}

void	free_split(char	**split)
{
	size_t	i;

	i = 0;
	while(split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	showstack(t_stack *a)
{
	t_node *cur = a->head;
	int i = 1;
	if (a->head == NULL)
		return ;
	while (1)
	{
		printf("cur[%d] : %d\n", i, cur->data);
		if (cur->next == a->head)
			break ;
		cur = cur->next;
		i++;
	}
}
