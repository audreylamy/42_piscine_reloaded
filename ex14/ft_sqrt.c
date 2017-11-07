/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy <alamy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:41:49 by alamy             #+#    #+#             */
/*   Updated: 2017/11/07 11:17:10 by alamy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int count;

	count = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (count)
	{
		if ((count * count) == nb)
		{
			return (count);
		}
		if ((count * count) > nb)
		{
			return (0);
		}
		count++;
	}
	return (0);
}
