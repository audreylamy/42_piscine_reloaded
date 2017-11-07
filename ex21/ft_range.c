/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy <alamy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:23:18 by alamy             #+#    #+#             */
/*   Updated: 2017/11/07 15:03:32 by alamy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	my_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	*ft_range(int min, int max)
{
	int	len;
	int	*tab;
	int	i;

	i = 0;
	len = max - min;
	tab = (int *)malloc(sizeof(*tab) * len);
	if (min >= max)
	{
		return (NULL);
	}
	while (min < max && i < len)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
