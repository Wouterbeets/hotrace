/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 09:27:58 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/15 19:43:31 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(void)
{
	t_key_and_val	*tab;
	int				ret;
	int				i;
	int				j;
	int				k;

	k = -1;
	ret = 1;
	j = 0;
	i = 100;
	tab = (t_key_and_val*)malloc(i * (sizeof(t_key_and_val)));
	while (ret > 0 && ++j >= 0 && ++k >= 0)
	{
		if (k == i)
		{
			i = i * 2;
			tab = ft_bigger_tab(tab, i);
		}
		ret = hotwhile(&j, &k, &tab);
	}
	ft_freetab(&tab, k);
	free(tab);
	return (0);
}

int		hotwhile(int *j, int *k, t_key_and_val **tab)
{
	char			*line;
	int				ret;

	if ((ret = get_next_line(0, &line)) != 0)
	{
		if (ft_strcmp(line, "") == 0 && *k > 0)
			ret = hotcut(j, k, &line, tab);
		(*tab + *j)->key = ft_strdup(line);
		free(line);
	}
	if (ret && (ret = get_next_line(0, &line)) != 0)
	{
		(*tab + *j)->val = ft_strdup(line);
		free(line);
	}
	return (ret);
}

int		hotcut(int *j, int *k, char **line, t_key_and_val **tab)
{
	t_heap			sheap;
	t_heap			*heap;
	char			*str;
	int				ret;

	str = "boo";
	sheap.tab = *tab;
	sheap.size = *k;
	heap = &sheap;
	buildheap(heap);
	*j = *j;
	while ((str = extract_max(heap)) != 0)
		;
	*j = 1;
	while ((ret = get_next_line(0, line)) != 0)
		ft_search(tab, *line, *k);
	return (ret);
}
