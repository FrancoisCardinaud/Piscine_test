/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcardina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:58:10 by fcardina          #+#    #+#             */
/*   Updated: 2022/09/13 17:18:21 by fcardina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str) {
	int i = 1;
	if ((str[0] >= 'a') && (str[0] <= 'z')) str[0] -= 32;
	while (str[i]) {
		if ((str[i - 1] < 47) && ((str[i] >= 'a') && (str[i] <= 'z'))) str[i] -= 32;
		i++;
	}
	return (str);
}

int	main()
{
	char *str;
	str = "bOnjoUr Comment tU vAs";
	return (ft_strcapitalize(str));
}
