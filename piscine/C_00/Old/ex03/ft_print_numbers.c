/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcardina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:26:39 by fcardina          #+#    #+#             */
/*   Updated: 2022/09/08 15:09:02 by fcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

I

void	ft_print_numbers(void)
{
	char	count;

	count = '0';
	while (count <= '9')
	{
		write(1, &count, 1);
		count++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
