/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcardina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:44:44 by fcardina          #+#    #+#             */
/*   Updated: 2022/09/12 14:51:17 by fcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	swp;
	int	y;

	x = 1;
	while (x < size)
	{
		swp = tab[x];
		y = x - 1;
		while (y >= 0 && tab[y] > swp)
		{
			tab[y + 1] = tab[y];
			y = y - 1;
		}
		tab[y + 1] = swp;
		x++;
	}
}
