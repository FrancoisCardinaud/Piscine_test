/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcardina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:38:31 by fcardina          #+#    #+#             */
/*   Updated: 2022/09/08 16:29:27 by fcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int i)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (i < 0)
	{
		write(1, &neg, 1);
	}	
	else
	{
		write(1, &pos, 1);
	}
}

int	main(void)
{
	ft_is_negative(-9);
	return (0);
}
