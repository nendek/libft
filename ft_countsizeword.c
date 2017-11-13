/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countsizeword.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnardozi <pnardozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:14:56 by pnardozi          #+#    #+#             */
/*   Updated: 2017/11/12 17:16:06 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_countsizeword(char const *s, char c)
{
	int	*tab;
	int	i;
	int	size;
	int j;

	i = 0;
	size = 0;
	j = 0;
	tab = ft_memalloc(ft_countword(s, c) + 1);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
			size++;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			tab[j] = size;
			size = 0;
			j++;
		}
		i++;
	}
	return (tab);
}
