/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:22:46 by yjoo              #+#    #+#             */
/*   Updated: 2022/04/28 15:10:36 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}

long	ft_atol(const char *str)
{
	int		minus;
	long	result;

	minus = 1;
	result = 0;
	if (ft_isspace(*str) && *str)
		str++;
	if (*str == '-')
		minus = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (minus * result);
}

int	atoi_tester(char *str)
{
	long	num;

	num = ft_atol(str);
	if (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		str++;
	if (ft_strlen(str) > 10 || ft_strlen(str) == 0)
		return (error_msg());
	if (num > INT_MAX || num < INT_MIN)
		return (error_msg());
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (error_msg());
		str++;
	}
	return (1);
}

void	check_arg(int ac, char **av, t_stack *a, t_stack *b)
{
	size_t	i;
	size_t	j;
	char	**split;

	i = 1;
	while (ac-- > 1)
	{
		j = 0;
		split = ft_split(av[i], ' ');
		while (split[j])
		{
			if (!atoi_tester(split[j]))
				return (free_split(split));
			node_push(a, ft_atoi(split[j]));
			j++;
		}
		free_split(split);
		i++;
	}
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
	free_stack(a);
	free_stack(b);
	return (0);
}
