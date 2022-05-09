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

void	push_swap(t_stack *a, t_stack *b)
{
	printf("----------------------\n");
	printf("show a\n");
	showstack(a);
	printf("show b\n");
	showstack(b);
	rra(a);
	printf("----------------------\n");
	printf("show a\n");
	showstack(a);
	printf("show b\n");
	showstack(b);
	rra(a);
	printf("----------------------\n");
	printf("show a\n");
	showstack(a);
	printf("show b\n");
	showstack(b);
}
