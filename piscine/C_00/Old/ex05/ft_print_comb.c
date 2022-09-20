/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 12:10:32 by anunes-d          #+#    #+#             */
/*   Updated: 2022/09/10 15:49:52 by fcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_result(char x, char y, char z)
{
	bool	prev_n;

	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	prev_n = !(x == '7' && y == '8' && z == '9');
	if (prev_n)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_result(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
