/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 06:10:16 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/21 20:56:29 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

void	ft_add_unit(int *n, char c)
{
	*n *= 10;
	*n += c - '0';
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (*(str + i) == ' ' || (*(str + i) >= 9 && *(str + i) <= 13))
	{
		i++;
	}
	while (*(str + i) == '+' || *(str + i) == '-')
	{
		sign *= ft_check_sign(*(str + i));
		i++;
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		ft_add_unit(&n, *(str + i));
		i++;
	}
	n *= sign;
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	int	ret;

	ret = ft_atoi("          ---+--+1234ab567");
	printf("%d", ret);
}
*/
