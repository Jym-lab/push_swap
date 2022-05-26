/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:19:10 by yjoo              #+#    #+#             */
/*   Updated: 2022/05/15 16:19:10 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

static void	quick_sort(int *arr, int left, int right)
{
	int	l;
	int	r;
	int	pivot;

	l = left;
	r = right;
	pivot = arr[(left + right) / 2];
	while (l < r)
	{
		while (arr[l] < pivot)
			l++;
		while (arr[r] > pivot)
			r--;
		if (l <= r)
		{
			swap(&arr[l], &arr[r]);
			l++;
			r--;
		}
	}
	if (left < r)
		quick_sort(arr, left, r);
	if (l < right)
		quick_sort(arr, l, right);
}

int	get_pivot(t_stack *a, int cnt)
{
	int		*arr;
	int		pivot;
	int		i;
	t_node	*cur;

	arr = ft_calloc(cnt, sizeof(int));
	cur = a->head;
	i = 0;
	while (i < cnt)
	{
		arr[i] = cur->data;
		cur = cur->next;
		i++;
	}
	quick_sort(arr, 0, cnt - 1);
	pivot = arr[cnt / 2];
	free(arr);
	return (pivot);
}
