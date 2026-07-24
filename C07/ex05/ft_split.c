/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:02:53 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/24 13:52:58 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

int	ft_count_sep(char *str, char *charset)
{
	int	i;
	int	j;
	int	occ;
	int	last_index;
	int	sep_len;

	sep_len = ft_strlen(charset);
	occ = 0;
	last_index = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		j = 0;
		while (*(str + i + j) == *(charset + j) && *(charset + j) != '\0')
			j++;
		if (*(charset + j) == '\0' && i != last_index)
		{
			if (i != last_index)
				occ++;
			last_index = i;
		}
		i++;
	}
	return (occ);
}

char	**ft_split(char *str, char *charset)
{
	
}
