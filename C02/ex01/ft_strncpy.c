/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 13:18:45 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/17 11:42:37 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
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
	ret = ft_strncpy(str, "123456789", 10);
	printf("%s\n%s\n", str, ret);

}
*/
