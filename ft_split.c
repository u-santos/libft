/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 21:56:04 by usantos-          #+#    #+#             */
/*   Updated: 2021/06/10 01:04:00 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_just_count_it(const char *str, char c)
{
	size_t	index;
	size_t	counter;

	index = 0;
	counter = 0;
	while (str[index] != 0)
	{
		if (str[index] != c && str[index] != 0)
		{
			counter++;
			while (str[index] != c && str[index] != 0)
				index++;
		}
		else if (str[index] != 0)
			index++;
	}
	return (counter);
}

void	freet(char **array)
{
	size_t	index;

	index = 0;
	while (array[index])
	{
		free(array[index]);
		index++;
	}
	free(array);
}

char	**ft_splinter(char const *s, char c, char **array)
{
	size_t	index;
	size_t	jndex;
	size_t	start;

	index = 0;
	jndex = 0;
	while (s[index] != 0)
	{
		if (s[index] != c && s[index] != 0)
		{
			start = index;
			while (s[index] != c && s[index] != 0)
				index++;
			array[jndex] = ft_substr(s, start, (index - start));
			if (array == 0)
			{
				freet(array);
				return (NULL);
			}
			jndex++;
		}
		else if (s[index] != 0)
			index++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	number;

	if (!s)
		return (0);
	number = ft_just_count_it(s, c);
	array = (char **)ft_calloc(sizeof(char *), (number + 1));
	if (array == 0)
		return (0);
	if (number == 0)
		return (array);
	array = ft_splinter(s, c, array);
	if (!array)
	{
		freet(array);
		return (NULL);
	}
	return (array);
}
