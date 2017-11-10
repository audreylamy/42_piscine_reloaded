/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamy <alamy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:41:49 by alamy             #+#    #+#             */
/*   Updated: 2017/11/08 11:30:11 by alamy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int resultat;

	i = 1;
	resultat = 1;
	if ((nb > 12) || (nb < 0))
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (i <= nb)
	{
		resultat = resultat * i;
		i = i + 1;
	}
	return (resultat);
}
