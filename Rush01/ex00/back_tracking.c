/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back_tracking.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 15:54:00 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/26 17:43:21 by hbaguena         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	check_validity(int **grid, int **values, int *coord, int n);
int	back_tracking(int **grid, int **values, int *coord, int n);

int	backtrack_loop(int **grid, int **values, int *coord, int n)
{
	int	i;

	i = 1;
	while (i <= n)
	{
		grid[coord[1]][coord[0]] = i;
		if (check_validity(grid, values, coord, n))
		{
			if (coord[0] == n - 1)
			{
				if (coord[1] == n - 1)
					return (1);
				coord[0] = 0;
				coord[1]++;
			}
			else
			{
				coord[0]++;
			}
			if (back_tracking(grid, values, coord, n))
				return (1);
		}
		i++;
	}
	return (0);
}

int	back_tracking(int **grid, int **values, int *coord, int n)
{
	if (backtrack_loop(grid, values, coord, n))
		return (1);
	grid[coord[1]][coord[0]] = 0;
	if (coord[0] == 0)
	{
		if (coord[1] == 0)
			return (0);
		coord[0] = n - 1;
		coord[1]--;
	}
	else
	{
		coord[0]--;
	}
	return (0);
}
