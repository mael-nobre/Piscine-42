/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 15:52:23 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/18 17:05:37 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 0;
	while (res == 0 && i < n)
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

	n = ft_strncmp("ABC", "AB", 3);
	printf("%d\n", n);
	n = ft_strncmp("ABC", "AB", 2);
	printf("%d\n", n);
}
*/
