/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcardina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:22:08 by fcardina          #+#    #+#             */
/*   Updated: 2022/09/19 14:02:24 by fcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power != 0) || power < 0)
	{
		return (0);
	}
	if (power == 0)
	{	
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
}
