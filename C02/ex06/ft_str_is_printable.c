/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:47:30 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/18 14:51:05 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
		if (test >= 32 && test <= 126)
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

	res = ft_str_is_printable("tdfytkfgpiyfgu864916541654864116");
	printf("%d\n", res);
	res = ft_str_is_printable("gyfUFYUGfvg\nUYGVuyFVYUFUTFyuFYu");
	printf("%d\n", res);
	res = ft_str_is_printable("KJFHEROFW;L;ME54841654156");
	printf("%d\n", res);
	res = ft_str_is_printable("");
	printf("%d\n", res);
	return (0);
}
*/
