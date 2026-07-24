/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:47:30 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/18 13:10:29 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	char	test;
	int		i;
	int		res;

	i = 0;
	res = 1;
	while (*(str + i) != '\0')
	{
		test = *(str + i);
		i++;
		if (test >= '0' && test <= '9')
		{
			continue ;
		}
		res = 0;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int	res;

	res = ft_str_is_numeric("9634982649832648932");
	printf("%d\n", res);
	res = ft_str_is_numeric("9734636498269832469823 698326489264986439");
	printf("%d\n", res);
	res = ft_str_is_numeric("65739304873-3476826487236487282");
	printf("%d\n", res);
	res = ft_str_is_numeric("");
	printf("%d\n", res);
	return (0);
}
*/
