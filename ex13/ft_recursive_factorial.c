/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy <alamy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:41:49 by alamy             #+#    #+#             */
/*   Updated: 2017/11/08 11:35:11 by alamy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb > 12) || (nb < 0))
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (nb * (ft_recursive_factorial(nb - 1)));
	}
}
