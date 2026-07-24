/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 09:48:01 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/18 10:55:52 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_set_letters(int i, int j, int x, int y)
{
	char	c;

	c = ' ';
	if ((i == 0 || i == y - 1) && (j == 0 || j == x - 1))
	{
		c = 'o';
	}
	else if (j == 0 || j == x - 1)
	{
		c = '|';
	}
	else if (i == 0 || i == y - 1)
	{
		c = '-';
	}
	return (c);
}

void	rush(int x, int y)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			c = ft_set_letters(i, j, x, y);
			ft_putchar(c);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
