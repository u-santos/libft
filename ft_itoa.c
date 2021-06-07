/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 00:19:28 by usantos-          #+#    #+#             */
/*   Updated: 2021/06/07 10:12:21 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_int(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		counter = 1;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

void	ft_itoar(int n, int total, char *array)
{
	char	result;

	array[total] = '\0';
	if (n < 0)
	{
		if (n == -2147483648)
		{
			total--;
			array[total] = '8';
			n = -214748364;
		}
		n *= -1;
		array[0] = '-';
	}
	if (!n)
		array[0] = '0';
	while (n > 0)
	{
		result = n % 10 + '0';
		array[total - 1] = result;
		n /= 10;
		total--;
	}
}

char	*ft_itoa(int n)
{
	char	*array;
	int		total;

	total = ft_count_int(n);
	array = (char *)malloc(sizeof(char) * (total + 1));
	if (array == 0)
		return (NULL);
	ft_itoar(n, total, array);
	return (array);
}
