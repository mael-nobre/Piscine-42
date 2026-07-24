/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 08:19:46 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/21 08:33:36 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	res = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 10)
	{
		printf("%d: %d\n", i, ft_iterative_factorial(i));
		i++;
	}
}
*/
