/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 17:10:22 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/18 18:40:59 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	i;

	n = ft_strlen(dest);
	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + n + i) = *(src + i);
		i++;
	}
	*(dest + n + i) = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str;
	char	*ret;

	str = (char *) malloc(7 * sizeof(char));
	*str = '\0';
	ft_strcat(str, "Hel");
	ret = ft_strcat(str,"lo!");
	printf("%s\n%s\n", str, ret);
	free(str);
	return (0);
}
*/
