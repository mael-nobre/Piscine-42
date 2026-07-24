/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 15:52:23 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/18 16:27:21 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>

int	main(void)
{
	int	n;

	n = ft_strcmp("ABC", "ABC");
	printf("%d\n", n);
	n = ft_strcmp("ABC", "AB");
	printf("%d\n", n);
	n = ft_strcmp("ABA", "ABZ");
	printf("%d\n", n);
	n = ft_strcmp("ABJ", "ABC");
    printf("%d\n", n);
	return (0);
}
*/
