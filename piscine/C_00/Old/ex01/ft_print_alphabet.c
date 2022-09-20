/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcardina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 13:09:31 by fcardina          #+#    #+#             */
/*   Updated: 2022/09/08 14:47:17 by fcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	count;

	count = 'a';
	while (count <= 'z')
	{
		write(1, &count, 1);
		count++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
