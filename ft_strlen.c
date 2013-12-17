/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:54:02 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/14 10:08:19 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

size_t		ft_strlen(const char *s1)
{
	int		i;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	return (i);
}