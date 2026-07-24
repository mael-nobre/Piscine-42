/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 09:11:02 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/23 21:01:22 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (res == 0)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			res = *(s1 + i) - *(s2 + i);
		}
		else if (*(s1 + i) == '\0')
		{
			break ;
		}
		i++;
	}
	return (res);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void	ft_sort_arg(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(*(argv + i), *(argv + j)) > 0)
				ft_swap(argv + i, argv + j);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	argc--;
	argv++;
	ft_sort_arg(argc, argv);
	i = 0;
	while (i < argc)
	{
		ft_putstr(*(argv + i));
		i++;
	}
	return (0);
}
