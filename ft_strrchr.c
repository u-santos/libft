/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:52:17 by usantos-          #+#    #+#             */
/*   Updated: 2021/06/11 22:48:48 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*begin;

	begin = (char *)s;
	if (s != NULL)
	{
		while (*s)
			s++;
		if ((char)c == '\0')
			return ((char *)s);
		s--;
		while (*s != (char)c && s != begin)
			s--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
