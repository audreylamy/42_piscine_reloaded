/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy <alamy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:23:18 by alamy             #+#    #+#             */
/*   Updated: 2017/11/07 15:35:09 by alamy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		my_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*s1;
	int		i;

	i = 0;
	s1 = (char *)malloc(sizeof(*s1) * my_strlen(src));
	while (src[i] != '\0')
	{
		s1[i] = src[i];
		i++;
	}
	return (s1);
}
