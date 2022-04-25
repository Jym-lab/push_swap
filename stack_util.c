/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackutil.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:48:34 by yjoo              #+#    #+#             */
/*   Updated: 2022/04/21 04:46:49 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack(void)
{
	t_stack *newStack;

	newStack = (t_stack *)malloc(sizeof(t_stack));
	newStack->head = NULL;
	newStack->size = 0;
	return (newStack);
}
