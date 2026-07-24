/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 17:10:22 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/20 17:12:34 by mnobre           ###   ########lyon.fr   */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	unsigned int	i;

	n = ft_strlen(dest);
	i = 0;
	while (*(src + i) != '\0' && i < nb)
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
	ft_strncat(str, "Hel", 3);
	ret = ft_strncat(str,"lo!", 2);
	printf("%s\n%s\n", str, ret);
	free(str);
	return (0);
}
*/
