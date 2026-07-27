/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_and_increment.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaguena <hbaguena@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 17:52:47 by hbaguena          #+#    #+#             */
/*   Updated: 2026/07/26 18:38:16 by hbaguena         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	check_and_increment(int **grid, int **values, int coord[4])
{
	if (grid[coord[0]][coord[1]] == 0)
	{
		coord[3]++;
		if (coord[3] <= values[coord[2]][coord[1]])
			return (1);
		else
			return (0);
	}
	return (-1);
}
