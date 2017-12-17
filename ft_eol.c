/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eol.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnardozi <pnardozi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 14:19:11 by pnardozi          #+#    #+#             */
/*   Updated: 2017/12/17 14:19:15 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_eol(char *str)
{
	int	i;

	i = 0;
	if (str)
		while (str[i] != '\0')
		{
			if (str[i] == '\n' || str[i] == EOF)
				return (1);
			i++;
		}
	return (0);
}
