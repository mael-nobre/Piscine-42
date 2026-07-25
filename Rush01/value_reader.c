/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_reader.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 11:25:00 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/25 11:50:21 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	value_at_index(char *values, int index)
{
	int	res;

	index *= 2;
	res = values[index] - '0';
	return (res);
}

int	**value_reader(char *values)
{
	int	i;
	int	j;
	int	**res;

	res = (int **) malloc(4 * sizeof(int *));
	i = 0;
	while (i < 4)
	{
		res[i] = (int *) malloc(4 * sizeof(int));
		j = 0;
		while (j < 4)
		{
			res[i][j] = value_at_index(values, (i * 4) + j);
			j++;
		}
		i++;
	}
	return (res);
}
