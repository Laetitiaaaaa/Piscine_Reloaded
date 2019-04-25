/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:35:46 by llejeune          #+#    #+#             */
/*   Updated: 2018/12/04 08:29:07 by llejeune         ###   ########.fr       */
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
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
