/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:23:15 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/21 22:00:43 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	i = 0;
	*range = (int *) malloc(len * 4);
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	size;
	int	i;
	int	*arr;

	i = 0;
	size = ft_ultimate_range(&arr, 13, 45);
	printf("Size: %d\n", size);
	while (i < size)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
*/
