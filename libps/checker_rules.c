/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rules.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:09:29 by bshintak          #+#    #+#             */
/*   Updated: 2022/03/09 12:01:08 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checker_number(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] < '0' || argv[i][j] > '9') && (argv[i][j] != '-'))
				return (FALSE); 
			j++;
		}
		i++;
	}
	return (TRUE);
}

int	checker_max_min(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_atoi(argv[i]) < INT_MIN || ft_atoi(argv[i]) > INT_MAX)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int	checker_duplicate(int argc, char **argv)
{
	int	i;
	int	j;

	j = 2;
	i = 1;
	while (i < argc - 1)
	{
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (FALSE);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (TRUE);
}

int	checker_sinal(int argc, char **argv)
{
	int	i;
	int	j;
	int	h;

	i = 1;
	j = 1;
	while (i < argc)
	{
		h = 0;
		if (argv[j][h] == '-')
		{
			h += 1;
			if (!(argv[j][h] >= '0' && argv[j][h] <= '9'))
				return (FALSE);
		}
		j++;
		i++;
	}
	return (TRUE);
}

int	checker_is_valid(int argc, char **argv)
{
	if (checker_number(argc, argv) != TRUE)
		return (FALSE);
	else if (checker_max_min(argc, argv) != TRUE)
		return (FALSE);
	else if (checker_duplicate(argc, argv) != TRUE)
		return (FALSE);
	else if (checker_sinal(argc, argv) != TRUE)
		return (FALSE);
	return (TRUE);
}
