/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 23:38:26 by usantos-          #+#    #+#             */
/*   Updated: 2021/06/05 23:50:58 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	index;

	index = 0;
	if (!s1 || !s2)
		return (NULL);
	newstr = ft_calloc((1 + (ft_strlen(s1) + ft_strlen(s2))), sizeof(char));
	if (!newstr)
		return (NULL);
	while (*s1)
	{
		newstr[index] = *s1;
		index++;
		s1++;
	}
	while (*s2)
	{
		newstr[index] = *s2;
		index++;
		s2++;
	}
	newstr[index] = '\0';
	return (newstr);
}
