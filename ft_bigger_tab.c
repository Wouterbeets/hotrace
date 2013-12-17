/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bigger_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 19:23:45 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/14 19:24:10 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_key_and_val	*ft_new_tab(int size)
{
	return ((t_key_and_val *)malloc(size * sizeof(t_key_and_val) + 1));
}

t_key_and_val	*ft_bigger_tab(t_key_and_val *tab, int new_size)
{
	t_key_and_val	*bigtab;
	t_key_and_val	*copy;

	bigtab = ft_new_tab(new_size);
	copy = ft_copy_tab(tab, bigtab, new_size);
	free(tab);
	return (copy);
}

t_key_and_val	*ft_copy_tab(t_key_and_val *tab, t_key_and_val *bigtab, int size)
{
	int		cntr;

	cntr = 0;
	if (tab == NULL || bigtab == 0)
		return (0);
	while (cntr < size)
	{
		bigtab[cntr] = tab[cntr];
		cntr++;
	}
	return (bigtab);
}
