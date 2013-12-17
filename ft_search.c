/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/15 17:53:01 by gpetrov           #+#    #+#             */
/*   Updated: 2013/12/15 17:53:06 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_search(t_key_and_val **tab, char *line, int max)
{
	int	min;
	int	middle;

	min = 1;
	middle = max / 2;
	while (min <= max)
	{
		if (ft_strcmp(line, (const char *)(*tab + middle)->key) < 0)
			max = middle - 1;
		else if (ft_strcmp(line, (const char *)(*tab + middle)->key) > 0)
			min = middle + 1;
		else if (ft_strcmp(line, (const char *)(*tab + middle)->key) == 0)
			{
				ft_putstr((const char *)(*tab + middle)->val);
				ft_putstr("\n");
				return ;
			}
		middle = (min + max) / 2;
	}
	if (min > max)
	{
		ft_putstr(line);
		ft_putstr(": Not found.\n");
	}
}
