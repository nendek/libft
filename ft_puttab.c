/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnardozi <pnardozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 11:40:35 by pnardozi          #+#    #+#             */
/*   Updated: 2017/12/15 11:40:37 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puttab(char **s)
{
	int		i;

	i = 0;
	if (s)
	{
		while (s[i] != NULL)
		{
			ft_putendl(s[i]);
			i++;
		}
	}
}
