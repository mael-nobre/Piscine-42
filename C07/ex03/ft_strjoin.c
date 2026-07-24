/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 07:28:23 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/22 08:15:02 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

int	ft_calc_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		if (i != size - 1)
			len += ft_strlen(sep);
		len += ft_strlen(strs[i]);
		i++;
	}
	len++;
	return (len);
}

void	ft_add_sep(char *res, char *sep, int *index)
{
	int	i;

	i = 0;
	while (*(sep + i) != '\0')
	{
		*(res + *index) = *(sep + i);
		(*index)++;
		i++;
	}
}

void	ft_process_str(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	index = 0;
	while (i < size)
	{
		j = 0;
		while (*(strs[i] + j) != '\0')
		{
			*(res + index) = *(strs[i] + j);
			index++;
			j++;
		}
		if (i != size - 1)
			ft_add_sep(res, sep, &index);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*res;

	len = ft_calc_len(size, strs, sep);
	res = (char *) malloc(len);
	ft_process_str(size, strs, sep, res);
	return (res);
}
