/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:22:46 by yjoo              #+#    #+#             */
/*   Updated: 2022/04/21 06:47:02 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdio.h>

void	showstack(t_stack *a)
{
	t_node *cur = a->head;
	int i = 1;
	if (a->head == NULL)
		exit(1);
	while (1)
	{
		printf("cur[%d] : %d\n", i, cur->data);
		if (cur->next == a->head)
			break ;
		cur = cur->next;
		i++;
	}
}

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

int	check_arg_atoi(const char *str)
{
	int		minus;
	size_t	i;
	long	result;

	minus = 1;
	i = 0;
	result = 0;
	if (ft_isspace(str[i]) && str[i])
		i++;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			exit(1);
		result = result * 10 + (str[i] - '0');
		if ((result > 2147483647 && minus == 1)
			|| (result > 2147483648 && minus == -1))
			exit(1);
		i++;
	}
	return (minus * result);
}

void	check_arg(int ac, char **av, t_stack *a, t_stack *b)
{
	int		i;
	int		j;
	char	**split;

	i = 1;
	while (ac-- > 1)
	{
		j = 0;
		split = ft_split(av[i], ' ');
		while (split[j])
		{
			nodeadd_back(a, check_arg_atoi(split[j]));
			free(split[j]);
			j++;
		}
		i++;
	}
	free(split);
	showstack(a);
	showstack(b);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	a = init_stack();
	b = init_stack();
	check_arg(ac, av, a, b);
	return (0);
}
