/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 19:57:52 by usantos-          #+#    #+#             */
/*   Updated: 2021/06/07 00:16:58 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	ft_atoi(const char *str)
{
	int	index;
	int	negative;
	int	result;

	index = 0;
	negative = 1;
	result = 0;
	while (str[index] && (str[index] == 32
			|| (str[index] >= 9 && str[index] <= 13)))
		index++;
	if (str[index] == '-' || str[index] == '+')
		if (str[index++] == '-')
			negative *= -1;
	while (ft_isdigit(str[index]))
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}
	return (result * negative);
}
