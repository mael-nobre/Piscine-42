/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 15:34:34 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/21 15:52:48 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	square;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= nb)
	{
		square = i * i;
		if (square == nb)
			return (i);
		if (square > nb)
			return (0);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 100)
	{
		printf("%d: %d\n", i, ft_sqrt(i));
		i++;
	}
}
*/
