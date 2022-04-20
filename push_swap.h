/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:20:14 by yjoo              #+#    #+#             */
/*   Updated: 2022/04/20 15:06:38 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	struct s_list	*next;
	int				data;
}	t_stack;

typedef struct s_listmark
{
	t_stack	*head;
	t_stack	*tail;
	int		size;
}	t_listmark;

t_listmark	*init_list(void);

#endif
