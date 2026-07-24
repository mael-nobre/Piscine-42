/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 16:24:05 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/21 07:41:12 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_check_validity(char *base, int base_n)
{
	int	i;
	int	j;

	if (base_n < 2)
		return (1);
	i = 0;
	while (*(base + i) != '\0')
	{
		if (*(base + i) < 32 || *(base + i) > 126)
			return (1);
		if (*(base + i) == '+' || *(base + i) == '-')
			return (1);
		j = 1;
		while (*(base + i + j) != '\0')
		{
			if (*(base + i) == *(base + i + j))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		base_n;
	char	c;

	n = nbr;
	base_n = ft_strlen(base);
	if (ft_check_validity(base, base_n) == 1)
	{
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n > base_n - 1)
	{
		ft_putnbr_base(n / base_n, base);
		n %= base_n;
	}
	c = *(base + n);
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_putnbr_base(128, "0123456789ABCDEF");
}
*/
