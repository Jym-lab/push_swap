/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_reverse_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:03:51 by yjoo              #+#    #+#             */
/*   Updated: 2022/05/06 16:03:51 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rev_rotate(t_stack *stack)
{
	if (stack->head == NULL)
		return ;
	stack->head = stack->head->prev;
}
void	rra(t_stack *a)
{
	ft_rev_rotate(a);
	ft_putstr_fd("rra\n", 1);
}
void	rrb(t_stack *b)
{
	ft_rev_rotate(b);
	ft_putstr_fd("rrb\n", 1);
}
void	rrr(t_stack *a, t_stack *b)
{
	ft_rev_rotate(a);
	ft_rev_rotate(b);
	ft_putstr_fd("rrr\n", 1);
}
