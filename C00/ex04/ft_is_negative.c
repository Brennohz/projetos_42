/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brsouza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:55:47 by brsouza           #+#    #+#             */
/*   Updated: 2025/04/16 19:08:01 by brsouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	return_value;

	if (n >= 0)
	{
		return_value = 'P';
	}
	else
	{
		return_value = 'N';
	}
	write(1, &return_value, 1);
}
