/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnardozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 14:02:31 by pnardozi          #+#    #+#             */
/*   Updated: 2017/11/13 14:25:42 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_duplicate(const char *s, char **tab, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c && s[i] != '\0')
		{
			tab[j][k] = s[i];
			k++;
		}
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			tab[j][k] = s[i];
			tab[j][k++] = '\0';
			j++;
			k = 0;
		}
		i++;
	}
	tab[j] = NULL;
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		*tab_sizeword;
	int		i;

	if (s)
	{
		i = 0;
		if (!(tab = (char**)malloc(sizeof(char*) * (ft_countword(s, c) + 1))))
			return (NULL);
		if (!(tab_sizeword = ft_memalloc(ft_countword(s, c))))
			return (NULL);
		tab_sizeword = ft_countsizeword(s, c);
		while (i < ft_countword(s, c))
		{
			if (!(tab[i] = ft_strnew(tab_sizeword[i])))
				return (NULL);
			i++;
		}
		ft_duplicate(s, tab, c);
		free(tab_sizeword);
		return (tab);
	}
	return (NULL);
}
