/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llejeune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:23:32 by llejeune          #+#    #+#             */
/*   Updated: 2018/11/07 12:35:12 by llejeune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		taille;
	char	*cpy;
	int		i;

	taille = ft_strlen(src);
	cpy = (char*)malloc(sizeof(char) * (taille + 1));
	if (cpy == 0)
		return (0);
	i = 0;
	while (src[i] != 0)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}
