/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/15 19:28:16 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/15 19:49:55 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_freetab(t_key_and_val **tab, int size)
{
	int		i;

	i = 0;
	while (i <= size)
	{
		free((*tab + i)->key);
		free((*tab + i)->val);
		i++;
	}
}
