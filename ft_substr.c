/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 23:02:19 by usantos-          #+#    #+#             */
/*   Updated: 2021/06/06 15:12:14 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	index;

	index = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{	
		substr = ft_calloc(1, 1);
		return (substr);
	}
	substr = ft_calloc((len + 1), sizeof(char));
	if (!substr)
		return (NULL);
	while (index < len)
	{
		substr[index] = s[start + index];
		index++;
	}
	substr[index] = '\0';
	return (substr);
}
