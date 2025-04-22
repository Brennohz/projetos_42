/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:00:52 by thaperei          #+#    #+#             */
/*   Updated: 2025/04/22 14:48:40 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	is_alpha_lower;
	int	is_alpha_upper;

	index = 0;
	while (str[index] != '\0')
	{
		is_alpha_lower = (str[index] >= 'a' && str[index] <= 'z');
		is_alpha_upper = (str[index] >= 'A' && str[index] <= 'Z');
		if (!(is_alpha_lower || is_alpha_upper))
			return (0);
		index++;
	}
	return (1);
}
