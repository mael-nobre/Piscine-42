/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 12:22:12 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/19 13:29:21 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*ret;

	str = (char *) malloc(10 * sizeof(char));
	ret = ft_strcpy(str, "123456789");
	printf("%s\n%s\n", str, ret);
}
*/
