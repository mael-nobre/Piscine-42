/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:47:30 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/18 13:16:29 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		if (test >= 'a' && test <= 'z')
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

	res = ft_str_is_lowercase("iugfbwegiuhfwegih");
	printf("%d\n", res);
	res = ft_str_is_lowercase("gyfUFYUGfvgUYGVuyFVYUFUTFyuFYu");
	printf("%d\n", res);
	res = ft_str_is_lowercase("KJFHEROFW;L;ME54841654156");
	printf("%d\n", res);
	res = ft_str_is_lowercase("");
	printf("%d\n", res);
	return (0);
}
*/
