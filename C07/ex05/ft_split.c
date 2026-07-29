/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:02:53 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/29 21:50:22 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	j;
	int	count;
	int	last_sep_index;

	count = 0;
	last_sep_index = 0;
	i = -1;
	while (*(str + ++i) != '\0')
	{
		j = -1;
		while (*(charset + ++j) != '\0')
		{
			if (*(str + i) == *(charset + j))
			{
				if (i != last_sep_index)
					count++;
				last_sep_index = i + 1;
			}
		}
	}
	if (i != last_sep_index)
		count++;
	return (count);
}

void	check_index(char *str, char **res, int var[4])
{
	if (var[0] != var[2])
	{
		*(res + var[3]) = (char *) malloc((var[0] - var[2] + 1) * sizeof(char));
		ft_strncpy(*(res + var[3]), str + var[2], var[0] - var[2]);
		var[3]++;
	}
}

// var[0] : index 1
// var[1] : index 2
// var[2] : last separator index
// var[3] : word index
void	ft_alloc(char *str, char *charset, char **res)
{
	int	var[4];

	var[0] = -1;
	var[2] = 0;
	var[3] = 0;
	while (*(str + ++var[0]) != '\0')
	{
		var[1] = -1;
		while (*(charset + ++var[1]) != '\0')
		{
			if (*(str + var[0]) == *(charset + var[1]))
			{
				check_index(str, res, var);
				var[2] = var[0] + 1;
			}
		}
	}
	check_index(str, res, var);
	*(res + var[3]) = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		count_word;

	count_word = ft_count_word(str, charset);
	res = (char **) malloc(count_word * sizeof(char *) + 1);
	ft_alloc(str, charset, res);
	return (res);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	**res;
	int		i;

	if (argc != 3)
		return (0);
	res = ft_split(argv[1], argv[2]);
	i = 0;
	while (*(res + i) != 0)
	{
		printf("%s\n", *(res + i));
		i++;
	}
	return (0);
	i = 0;
	while (*(res + i) != 0)
	{
		free(*(res + i));
		i++;
	}
	free(res);
	return (0);
}
*/
