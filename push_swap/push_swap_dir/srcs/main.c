/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knaidoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 06:11:21 by knaidoo           #+#    #+#             */
/*   Updated: 2018/09/17 16:19:19 by knaidoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int		ft_error(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != '-'
					&& argv[i][j] != '+' && argv[i][j] != ' ')
			{
				ft_putstr_fd("Error\n", 2);
				exit (0);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_duplicates(t_stack sa)
{
	int	i;
	int j;

	i = 0;
	while (i < sa.top)
	{
		j = 0;
		while (j < sa.top)
		{
			if (sa.num[i] == sa.num[j] && j != i)
			{
				ft_putstr_fd("Error\n", 2);
				exit (0);
			}
			j++;
		}
		if (sa.num[i] > 2147483647 || sa.num[i] < -2147483647)
		{
			ft_putstr_fd("Error\n", 2);
			exit (0);
		}
		i++;
	}
	return (0);
}

int		ft_addnum(t_stack *sa, char *num)
{
	int i;

	i = 0;
	while (num[i] != ' ' && num[i])
		i++;
	sa->num[sa->top++] = ft_atoi(num);
	return (i);
}

t_stack	ft_init(int argc, char **argv)
{
	t_stack	sa;
	int		i;
	int		j;

	i = 0;
	sa.num = (long*)malloc(BUFF_SIZE);
	sa.top = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j])
					|| argv[i][j] == '-' || argv[i][j] == '+')
			{
				j = j + ft_addnum(&sa, &argv[i][j]);
				if (j > (int)ft_strlen(argv[i]))
					break ;
			}
			else
				j++;
		}
	}
	return (sa);
}

int		main(int argc, char **argv)
{
	t_stack sa;

	if (ft_error(argc, argv))
		return (0);
	sa = ft_init(argc, argv);
	if (ft_duplicates(sa))
		return (0);
	ft_splitstack(&sa);
	return (0);
}
