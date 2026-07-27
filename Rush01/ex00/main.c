/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 11:23:19 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/26 20:54:31 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		**value_reader(char *values, int *n);
int		back_tracking(int **grid, int **values, int *coord, int n);
void	print_result(int **grid, int n);

int	**init_grid(int n)
{
	int	**grid;
	int	i;
	int	j;

	grid = (int **) malloc(n * sizeof(int *));
	i = 0;
	while (i < n)
	{
		grid[i] = (int *) malloc(n * sizeof(int));
		j = 0;
		while (j < n)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

void	free_pointers(int **grid, int **values, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	i = 0;
	while (i < 4)
	{
		free(values[i]);
		i++;
	}
	free(values);
}

void	free_all_pointers(int **grid, int **values, int *coord, int n)
{
	free_pointers(grid, values, n);
	free(coord);
}

int	*allocate_and_initialize_coord(void)
{
	int	*coord;

	coord = (int *) malloc(2 * sizeof(int));
	coord[0] = 0;
	coord[1] = 0;
	return (coord);
}

int	main(int argc, char **argv)
{
	int	**grid;
	int	**values;
	int	*coord;
	int	n;

	coord = allocate_and_initialize_coord();
	n = 0;
	if (argc == 2)
	{
		values = value_reader(argv[1], &n);
		grid = init_grid(n);
		if (n > 0)
		{
			if (back_tracking(grid, values, coord, n))
			{
				print_result(grid, n);
				free_all_pointers(grid, values, coord, n);
				return (0);
			}
		}
		free_pointers(grid, values, n);
	}
	free(coord);
	write(1, "Error\n", 6);
	return (0);
}
