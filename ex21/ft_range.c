/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:35:46 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/09 14:54:39 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		taille;
	int		*tab;
	int		i;

	taille = max - min;
	if (min >= max)
		tab = 0;
	else
		tab = (int*)malloc(sizeof(int) * taille);
	if (tab == 0)
		return (0);
	tab[0] = min;
	i = 1;
	while ((i + min) < max)
	{
		tab[i] = i + min;
		i++;
	}
	return (tab);
}
