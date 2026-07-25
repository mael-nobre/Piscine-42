/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validity.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 13:16:40 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/25 14:47:51 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	check_row_double(int grid[4][4])
{
	int	row;
	int	i;
	int	j;

	row = 0;
	while (row < 4)
	{
		i = 0;
		while (i < 4)
		{
			j = i + 1;
			while (j < 4)
			{
				if (grid[row][i] == grid[row][j])
				{
					return (0);
				}
				j++;
			}
			i++;
		}
		row++;
	}
	return (1);
}

int	check_col_double(int grid[4][4])
{
	int	col;
	int	i;
	int	j;

	col = 0;
	while (col < 4)
	{
		i = 0;
		while (i < 4)
		{
			j = i + 1;
			while (j < 4)
			{
				if (grid[i][col] == grid[j][col])
				{
					return (0);
				}
				j++;
			}
			i++;
		}
		col++;
	}
	return (1);
}

int check_up_values(int grid[4][4], int **values)
{
	int	col;
	int	i;
	int	count;
	int	highest;

	col = 0;
	while (col < 4)
	{
		i = 0;
		count = 0;
		highest = 0;
		while (i < 4 && highest != 4)
		{
			if (grid[col][i] > highest)
			{
				highest = grid[col][i];
				count++;
			}
			i++;
		}
		if (count != values[0][col])
			return (0);
		col++;
	}
	return (1);
}
