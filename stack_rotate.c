/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:36:23 by yjoo              #+#    #+#             */
/*   Updated: 2022/05/06 15:36:23 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate(t_stack *stack)
{
	if (stack->head == NULL)
		return ;
	stack->head = stack->head->next;
}

int	ra(t_stack *a)
{
	ft_rotate(a);
	ft_putstr_fd("ra\n", 1);
	return (1);
}

int	rb(t_stack *b)
{
	ft_rotate(b);
	ft_putstr_fd("rb\n", 1);
	return (1);
}

void	rr(t_stack *a, t_stack *b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_putstr_fd("rr\n", 1);
}
