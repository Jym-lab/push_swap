/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:20:14 by yjoo              #+#    #+#             */
/*   Updated: 2022/05/06 16:08:35 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"
# include <stdio.h>//삭제예정

typedef struct s_node
{
	struct s_node	*next;
	struct s_node	*prev;
	int				data;
}	t_node;

typedef struct s_stack
{
	struct s_node	*head;
	int				size;
}	t_stack;

t_stack	*init_stack(void);

t_node	*new_node(int data);

void	showstack(t_stack *stack);//삭제예정
void	node_addlast(t_stack *list, int data);
void	stack_push(t_stack *stack, int data);
void	stack_pop(t_stack *stack);
void	free_stack(t_stack *stack);
void	free_split(char	**split);
void	push_swap(t_stack *a, t_stack *b);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

int		error_msg(void);
int		check_stack(t_stack *a);

#endif
