/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 13:02:53 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/24 14:40:40 by mnobre           ###   ########lyon.fr   */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
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
			last_index = i + j;
		}
		i++;
	}
	return (occ);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		sep_count;

	sep_count = ft_count_sep(str, charset);
	res = (char **) malloc((sep_count + 2) * 8);
}
