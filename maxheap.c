/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxheap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 13:14:17 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/15 14:39:56 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	buildheap(t_heap *A)
{
	int		i;

	i = A->size / 2;
	while (i >= 0)
	{
		make_heap(A, i);
		i--;
	}
}

void	make_heap(t_heap *A, int i)
{
	char	*largest;
	int		position;
	int		l;
	int		r;

	r = RIGHT(I);
	l = LEFT(I);
	largest = A->tab[i].key;
	position = i;
	if (l <= A->size && ft_strcmp(A->tab[l].key, largest) > 0)
	{
		largest = A->tab[l].key;
		position = l;
	}
	if (r <= A->size && ft_strcmp(A->tab[r].key, largest) > 0)
	{
		largest = A->tab[r].key;
		position = r;
	}
	if (i != position)
	{
		swap(&A->tab[i], &A->tab[position]);
		make_heap(A, position);
	}
}

void	swap(t_key_and_val *a, t_key_and_val *b)
{
	t_key_and_val	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

char	*extract_max(t_heap *A)
{
	char	*max;

	max = A->tab[0].val;
	if (!A->size)
		return (0);
	swap(&A->tab[0], &A->tab[A->size]);
	--A->size;
	make_heap(A, 0);
	return (max);
}
