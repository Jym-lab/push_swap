/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:48:34 by yjoo              #+#    #+#             */
/*   Updated: 2022/04/20 13:48:36 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_listmark *init_list(void)
{
	t_listmark *ls;

	ls = (t_listmark *)malloc(sizeof(t_listmark));
	ls->head = NULL;
	ls->tail = NULL;
	ls->size = 0;
	return (ls);
}
