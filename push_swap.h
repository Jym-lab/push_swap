/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:20:14 by yjoo              #+#    #+#             */
/*   Updated: 2022/04/27 12:35:51 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

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

void	showstack(t_stack *a);
void	node_push(t_stack *list, int data);
void	free_stack(t_stack *stack);
void	free_split(char	**split);

int		error_msg(void);

#endif
