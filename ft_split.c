/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 21:56:04 by usantos-          #+#    #+#             */
/*   Updated: 2021/06/10 00:46:53 by usantos-         ###   ########.fr       */
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

void	*freet(char **array, size_t jndex)
{
	size_t	index;

	index = 0;
	while (index < jndex)
	{
		free(array[index]);
		index++;
	}
	free(array);
	return (NULL);
}

void	ft_splinter(char const *s, char c, char **array)
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
			array[jndex] = (char *)ft_calloc(sizeof(char), (index - start + 1));
			if (array == 0)
			{
				freet(array, jndex);
				return ;
			}
			array[jndex] = ft_substr(s, start, (index - start));
			jndex++;
		}
		else if (s[index] != 0)
			index++;
	}
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
	ft_splinter(s, c, array);
	return (array);
}
