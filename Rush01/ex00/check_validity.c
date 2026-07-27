/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validity.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 13:16:40 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/26 20:07:54 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_values(int **grid, int **values, int *coord, int n);

int	check_row_double(int **grid, int y, int n)
{
	int	i;
	int	j;
	int	*values;

	values = (int *) malloc(n * sizeof(int));
	i = 0;
	while (i < n)
	{
		if (grid[y][i] == 0)
			return (1);
		j = 0;
		while (j < i)
		{
			if (grid[y][i] == values[j])
			{
				free(values);
				return (0);
			}
			j++;
		}
		values[i] = grid[y][i];
		i++;
	}
	free(values);
	return (1);
}

int	check_col_double(int **grid, int x, int n)
{
	int	i;
	int	j;
	int	*values;

	values = (int *) malloc(n * sizeof(int));
	i = 0;
	while (i < n)
	{
		if (grid[i][x] == 0)
			return (1);
		j = 0;
		while (j < i)
		{
			if (grid[i][x] == values[j])
				return (0);
			j++;
		}
		values[i] = grid[i][x];
		i++;
	}
	free(values);
	return (1);
}

int	check_validity(int **grid, int **values, int *coord, int n)
{
	if (!check_row_double(grid, coord[1], n))
		return (0);
	if (!check_col_double(grid, coord[0], n))
		return (0);
	if (!check_values(grid, values, coord, n))
		return (0);
	return (1);
}
