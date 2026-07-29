/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 15:49:31 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/29 16:20:19 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	check_and_increment(int **grid, int coord[4]);

int	check_up_values(int **grid, int **values, int x, int n)
{
	int	coord[4];
	int	highest;
	int	check;

	coord[0] = -1;
	coord[1] = x;
	coord[2] = values[0][x];
	coord[3] = 0;
	highest = 0;
	while (++coord[0] < n)
	{
		if (grid[coord[0]][x] > highest)
		{
			highest = grid[coord[0]][x];
			coord[3]++;
		}
		if (highest == n)
			break ;
		check = check_and_increment(grid, coord);
		if (check != -1)
			return (check);
	}
	if (coord[3] != values[0][x])
		return (0);
	return (1);
}

int	check_down_values(int **grid, int **values, int x, int n)
{
	int	coord[4];
	int	highest;
	int	check;

	coord[0] = n;
	coord[1] = x;
	coord[2] = values[1][x];
	coord[3] = 0;
	highest = 0;
	while (--coord[0] >= 0)
	{
		if (grid[coord[0]][x] > highest)
		{
			highest = grid[coord[0]][x];
			coord[3]++;
		}
		if (highest == n)
			break ;
		check = check_and_increment(grid, coord);
		if (check != -1)
			return (check);
	}
	if (coord[3] != values[1][x])
		return (0);
	return (1);
}

int	check_left_values(int **grid, int **values, int y, int n)
{
	int	coord[4];
	int	highest;
	int	check;

	coord[0] = y;
	coord[1] = -1;
	coord[2] = values[2][y];
	coord[3] = 0;
	highest = 0;
	while (++coord[1] < n)
	{
		if (grid[y][coord[1]] > highest)
		{
			highest = grid[y][coord[1]];
			coord[3]++;
		}
		if (highest == n)
			break ;
		check = check_and_increment(grid, coord);
		if (check != -1)
			return (check);
	}
	if (coord[3] != values[2][y])
		return (0);
	return (1);
}

int	check_right_values(int **grid, int **values, int y, int n)
{
	int	coord[4];
	int	highest;
	int	check;

	coord[0] = y;
	coord[1] = n;
	coord[2] = values[3][y];
	coord[3] = 0;
	highest = 0;
	while (--coord[1] >= 0)
	{
		if (grid[y][coord[1]] > highest)
		{
			highest = grid[y][coord[1]];
			coord[3]++;
		}
		if (highest == n)
			break ;
		check = check_and_increment(grid, coord);
		if (check != -1)
			return (check);
	}
	if (coord[3] != values[3][y])
		return (0);
	return (1);
}

int	check_values(int **grid, int **values, int *coord, int n)
{
	if (!check_left_values(grid, values, coord[1], n))
		return (0);
	if (!check_right_values(grid, values, coord[1], n))
		return (0);
	if (!check_up_values(grid, values, coord[0], n))
		return (0);
	if (!check_down_values(grid, values, coord[0], n))
		return (0);
	return (1);
}
