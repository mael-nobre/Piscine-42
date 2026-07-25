/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 11:23:19 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/25 14:50:17 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int **value_reader(char *values);
int check_validity(int grid[4][4]);
int check_up_values(int grid[4][4], int **values);

int	main(int argc, char **argv)
{
	int	grid1[4][4] = {
		{3, 2, 3, 2},
		{2, 4, 2, 1},
		{1, 3, 1, 3},
		{4, 1, 4, 4}
	};
	/*
	int grid2[4][4] = {
         {1, 2, 3, 4},
         {2, 3, 4, 1},
         {4, 4, 1, 2},
         {4, 1, 2, 3}
     };
	 */
	int **values = 0;

	if (argc == 2)
		values = value_reader(argv[1]);
	printf("%d\n", check_up_values(grid1, values));
	return (0);
}
