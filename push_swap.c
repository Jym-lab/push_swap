/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 01:41:00 by yjoo              #+#    #+#             */
/*   Updated: 2022/05/04 01:41:00 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_two(t_stack *a)
{
	if (a->head->data > a->head->next->data)
		sa(a);
}

static void	case_three(t_stack *a)
{
	int	arr[3];

	arr[0] = a->head->data;
	arr[1] = a->head->next->data;
	arr[2] = a->head->prev->data;
	if (arr[1] < arr[0] && arr[0] < arr[2])
		sa(a);
	else if (arr[2] < arr[1] && arr[1] < arr[0])
	{
		sa(a);
		rra(a);
	}
	else if (arr[1] < arr[2] && arr[2] < arr[0])
		ra(a);
	else if (arr[0] < arr[2] && arr[2] < arr[1])
	{
		sa(a);
		ra(a);
	}
	else if (arr[2] < arr[0] && arr[0] < arr[1])
		rra(a);
}

static void	case_five(t_stack *a, t_stack *b)
{
	int	max;
	int	min;

	max = max_data(a);
	min = min_data(a);
	while (a->size > 3)
	{
		if (a->head->data == max || a->head->data == min)
			pb(a, b);
		else
			ra(a);
	}
	case_three(a);
	while (b->size > 0)
	{
		pa(a, b);
		if (a->head->data == max)
			ra(a);
	}
}

void	push_swap(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		case_two(a);
	else if (a->size > 2 && a->size < 6)
		case_five(a, b);
	else
		a_to_b(a, b, a->size);
	//showstack(a);
}
