/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 14:41:42 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/22 18:58:03 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base, int base_len)
{
	int	i;
	int	j;

	if (base_len < 2)
		return (0);
	i = 0;
	while (*(base + i) != '\0')
	{
		if (*(base + i) == '-' || *(base + i) == '+'
			|| *(base + i) == ' ' || (*(base + i) >= 9 && *(base + i) <= 13))
			return (0);
		j = 1;
		while (*(base + i + j) != '\0')
		{
			if (*(base + i) == *(base + i + j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_find_index(char c, char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == c)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_base_to_int(char *str, char *base, int base_len)
{
	int	i;
	int	n;
	int	res;

	res = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		n = ft_find_index(*(str + i), base);
		if (n == -1)
			break ;
		res *= base_len;
		res += n;
		i++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	i;
	int	sign;

	base_len = ft_strlen(base);
	if (ft_check_base(base, base_len) == 0)
		return (0);
	i = 0;
	sign = 1;
	while (*(str + i) == ' ' || (*(str + i) >= 9 && *(str + i) <= 13))
		i++;
	while (*(str + i) == '+' || *(str + i) == '-')
	{
		if (*(str + i) == '-')
			sign *= -1;
		i++;
	}
	return (ft_base_to_int(str + i, base, base_len) * sign);
}
