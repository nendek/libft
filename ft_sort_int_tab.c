/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnardozi <pnardozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:35:18 by pnardozi          #+#    #+#             */
/*   Updated: 2017/11/13 10:44:23 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		buffer;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				buffer = tab[i];
				tab[i] = tab[j];
				tab[j] = buffer;
			}
			j++;
		}
		i++;
		j = 0;
	}
}
