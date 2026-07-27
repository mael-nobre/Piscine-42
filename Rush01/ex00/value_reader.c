/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_reader.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 11:25:00 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/26 20:06:06 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_entry(char *entry);

int	value_at_index(char *entry, int index)
{
	int	res;

	index *= 2;
	res = entry[index] - '0';
	return (res);
}

int	**value_reader(char *entry, int *n)
{
	int	i;
	int	j;
	int	**res;

	*n = check_entry(entry);
	res = (int **) malloc(4 * sizeof(int *));
	i = 0;
	while (i < 4)
	{
		res[i] = (int *) malloc(*n * sizeof(int));
		j = 0;
		while (j < *n)
		{
			res[i][j] = value_at_index(entry, (i * (*n)) + j);
			j++;
		}
		i++;
	}
	return (res);
}
