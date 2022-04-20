/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:22:46 by yjoo              #+#    #+#             */
/*   Updated: 2022/04/20 17:12:07 by yjoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdio.h>

int	check_arg(int ac, char **av)
{
	int		i;
	char	**split;

	i = 1;
	while (ac-- > 1)
	{
		split = ft_split(av[i], ' ');
		i++;
		for (int j=0; split[j] != 0; j++)
		{
			printf("av[%d] : %s\n", j, split[j]);
		}
	}
	return (1);
}

int	main(int ac, char **av)
{
//	t_listmark *a;
//	t_listmark *b;
	if (ac < 2)
		return (0);
	check_arg(ac, av);
	return (0);
//	a = init_list();
//	b = init_list();
}
