/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 11:47:30 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/18 12:59:27 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if ((test >= 'a' && test <= 'z') || (test >= 'A' && test <= 'Z'))
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

	res = ft_str_is_alpha("ajhdgjhsagdyudIUHFECJKSBF");
	printf("%d\n", res);
	res = ft_str_is_alpha("yugkergsndhdhdg ARDWFGHJS");
	printf("%d\n", res);
	res = ft_str_is_alpha("ajhdgjhsagdyud-IUHFECJKSBF");
	printf("%d\n", res);
	res = ft_str_is_alpha("");
	printf("%d\n", res);
	return (0);
}
*/
