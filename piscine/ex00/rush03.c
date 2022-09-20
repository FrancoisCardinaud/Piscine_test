/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcardina  <fcardina@student.42.it>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:52:16 by fcardina          #+#    #+#             */
/*   Updated: 2022/09/10 14:46:46 by fcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	h_side(int a, char left_corner, char middle, char right_corner)
{
	if (a >= 1)
	{
		a--;
		ft_putchar(left_corner);
		while (a >= 2)
		{
			a--;
			ft_putchar(middle);
		}
		if (a == 1)
		{
			ft_putchar(right_corner);
		}
		ft_putchar('\n');
	}
}

void	v_side(int a, int b, char middle)
{
	int	i;

	while (b > 2)
	{
		b--;
		ft_putchar(middle);
		i = 2;
		while (a > i)
		{
			i++;
			ft_putchar(' ');
		}
		if (a > 1)
		{
			ft_putchar(middle);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		h_side(x, 'A', 'B', 'C');
		v_side(x, y, 'B');
		if (y >= 2)
		{
			h_side(x, 'A', 'B', 'C');
		}
	}
}
