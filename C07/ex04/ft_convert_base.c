/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 10:20:10 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/23 14:32:43 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_atoi_base(char *str, char *base);
int	ft_check_base(char *base, int base_len);

void	ft_int_to_base(int n, int res_index, char *res, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (n < 0)
	{
		*res = '-';
		n *= -1;
	}
	if (n > base_len - 1)
	{
		ft_int_to_base(n / base_len, res_index - 1, res, base);
		n %= base_len;
	}
	*(res + res_index) = *(base + n);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		n;
	int		i;
	int		res_len;

	n = ft_atoi_base(nbr, base_from);
	if (ft_check_base(base_to, ft_strlen(base_to)) == 0 || n == 0)
		return (0);
	res_len = 1;
	i = n;
	if (i < 0)
	{
		i *= -1;
		res_len++;
	}
	while (i >= ft_strlen(base_to))
	{
		i /= ft_strlen(base_to);
		res_len++;
	}
	res = (char *) malloc(res_len + 1);
	ft_int_to_base(n, res_len - 1, res, base_to);
	*(res + res_len) = '\0';
	return (res);
}
