/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:36:59 by yjoo              #+#    #+#             */
/*   Updated: 2022/05/06 15:36:59 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_stack *dst, t_stack *src)
{
	if (src->head == NULL)
		return ;
	else
	{
		stack_push(dst, src->head->data);
		stack_pop(src);
	}
}

int	pa(t_stack *a, t_stack *b)
{
	ft_push(a, b);
	ft_putstr_fd("pa\n", 1);
	return (1);
}

int	pb(t_stack *a, t_stack *b)
{
	ft_push(b, a);
	ft_putstr_fd("pb\n", 1);
	return (1);
}
