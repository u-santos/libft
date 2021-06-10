/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 12:28:00 by usantos-          #+#    #+#             */
/*   Updated: 2021/06/10 01:29:11 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	if (c == 0)
	{
		while(*s)
			s++;
		return (s);
	}
	while (*s)
	{	
		if (c == *s)
			return ((char *) s);
		s++;
	}
	return (0);
}
