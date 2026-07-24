/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 08:36:25 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/21 08:46:17 by mnobre           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb != 1)
	{
		res = nb * ft_recursive_factorial(nb - 1);
	}
	return (res);
}
/*
#include <stdio.h>

int main(void)
{
    int i;

    i = 0;
    while (i <= 10)
    {
        printf("%d: %d\n", i, ft_recursive_factorial(i));
        i++;
    }
}
*/
