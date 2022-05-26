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
	int	pivot;
	int	rb_cnt;
	int	pa_cnt;

	if (cnt == 1)
		return ((void)pa(a, b));
	rb_cnt = 0;
	pa_cnt = 0;
	pivot = get_pivot(b, cnt);
	while (cnt--)
	{
		if (b->head->data < pivot)
			rb_cnt += rb(b);
		else
			pa_cnt += pa(a, b);
	}
	stack_rr(b, rb_cnt, 'b');
	a_to_b(a, b, pa_cnt);
	b_to_a(a, b, rb_cnt);
}

void	a_to_b(t_stack *a, t_stack *b, int cnt)
{
	int	pivot;
	int	ra_cnt;
	int	pb_cnt;

	if (cnt == 1)
		return ;
	if (cnt == 2)
		return (case_two(a));
	ra_cnt = 0;
	pb_cnt = 0;
	pivot = get_pivot(a, cnt);
	while (cnt--)
	{
		if (a->head->data > pivot)
			ra_cnt += ra(a);
		else
			pb_cnt += pb(a, b);
	}
	stack_rr(a, ra_cnt, 'a');
	a_to_b(a, b, ra_cnt);
	b_to_a(a, b, pb_cnt);
}
