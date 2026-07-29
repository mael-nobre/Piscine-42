/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:02:53 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/29 20:56:54 by mnobre           ###   ########lyon.fr   */
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

void	ft_alloc(char *str, char *charset, char **res)
{
	int	i;
	int	j;
	int	last_sep_index;
	int	word_index;

	last_sep_index = 0;
	i = 0;
	word_index = 0;
	while (*(str + i) != '\0')
	{
		j = 0;
		while (*(charset + j) != '\0')
		{
			if (*(str + i) == *(charset + j))
			{
				if (i != last_sep_index)
				{
					*(res + word_index) = (char *)
						malloc((i - last_sep_index + 1) * sizeof(char));
					ft_strncpy(*(res + word_index),
						str + last_sep_index, i - last_sep_index);
					word_index++;
				}
				last_sep_index = i + 1;
				break ;
			}
			j++;
		}
		i++;
	}
	if (i != last_sep_index)
	{
		*(res + word_index) = (char *) malloc((i - last_sep_index + 1)
				* sizeof(char));
		ft_strncpy(*(res + word_index),
			str + last_sep_index, i - last_sep_index);
		word_index++;
	}
	*(res + word_index) = 0;
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
