/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_entry.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnobre <mnobre@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 16:34:24 by mnobre            #+#    #+#             */
/*   Updated: 2026/07/26 17:48:28 by hbaguena         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	entry_loop(char *entry)
{
	int	i;

	i = 0;
	while (entry[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (entry[i] < '0' || entry[i] > '9')
				return (0);
		}
		else
		{
			if (entry[i] != ' ')
				return (0);
		}
		i++;
	}
	return (i);
}

int	check_entry(char *entry)
{
	int	i;
	int	n;

	i = entry_loop(entry);
	if (i % 2 == 0 || (i + 1) % 8 != 0)
		return (0);
	n = (i + 1) / 8;
	i = 0;
	while (entry[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (entry[i] < '1' || entry[i] > '0' + n)
				return (0);
		}
		i++;
	}
	return (n);
}
