/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 23:58:52 by usantos-          #+#    #+#             */
/*   Updated: 2021/06/06 15:26:20 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	length;
	char	*newstr;

	if (s1 && set)
	{
		while (*s1 && ft_strchr(set, *s1))
			s1++;
		length = ft_strlen(s1);
		while (length && ft_strchr(set, s1[length]))
			length--;
		newstr = ft_substr((char *)s1, 0, (length + 1));
		return (newstr);
	}
	return (NULL);
}
