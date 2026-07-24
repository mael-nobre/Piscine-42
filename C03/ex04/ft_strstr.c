/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 16:22:22 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/20 17:24:38 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (*to_find == '\0')
	{
		return (str);
	}
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == *to_find)
		{
			j = 0;
			while (*(str + i + j) == *(to_find + j) && *(to_find + j) != '\0')
			{
				j++;
			}
			if (*(to_find + j) == '\0')
			{
				return (str + i);
			}
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*res;

	res = ft_strstr("I am yo you the best love you", "you");
	printf("%s\n", res);
	return (0);
}
*/
