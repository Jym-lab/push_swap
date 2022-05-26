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
	t_node	*cur;

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
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int	error_msg(void)
{
	ft_putstr_fd("Error\n", 1);
	return (0);
}

int	max_data(t_stack *stack)
{
	t_node	*cur;
	int		max;

	max = INT_MIN;
	cur = stack->head;
	while (cur)
	{
		if (max <= cur->data)
			max = cur->data;
		cur = cur->next;
		if (cur == stack->head)
			break ;
	}
	return (max);
}

int	min_data(t_stack *stack)
{
	t_node	*cur;
	int		min;

	min = INT_MAX;
	cur = stack->head;
	while (cur)
	{
		if (min >= cur->data)
			min = cur->data;
		cur = cur->next;
		if (cur == stack->head)
			break ;
	}
	return (min);
}

//삭제예정인 함수
void	showstack(t_stack *stack)
{
	t_node	*cur = stack->head;
	int		i = 1;

	if (stack->head == NULL)
		return ;
	while (1)
	{
		printf("cur[%d] : %d\n", i, cur->data);
		if (cur->next == stack->head)
			break ;
		cur = cur->next;
		i++;
	}
}
