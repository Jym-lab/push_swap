/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:18:03 by yjoo              #+#    #+#             */
/*   Updated: 2022/05/17 19:18:03 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	stack_rr(t_stack *stack, int cnt, char sep)
{
	if (sep == 'a')
	{
		while (cnt--)
			rra(stack);
	}
	else if (sep == 'b')
	{
		while (cnt--)
			rrb(stack);
	}
}

void	b_to_a(t_stack *a, t_stack *b, int cnt)
{
	printf("a");
}
