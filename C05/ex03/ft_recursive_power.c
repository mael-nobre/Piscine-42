/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 08:48:13 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/21 09:11:33 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power != 1)
	{
		res *= ft_recursive_power(nb, power - 1);
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			printf("%d^%d: %d\n", i, j, ft_recursive_power(i, j));
			j++;
		}
		i++;
	}
}
*/
