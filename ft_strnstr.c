/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 13:32:02 by usantos-          #+#    #+#             */
/*   Updated: 2021/06/05 13:52:42 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	length;

	if (*little == '\0')
		return ((char *)big);
	length = ft_strlen(little);
	while (*big && length <= n--)
	{
		if (!ft_strncmp(big, little, length))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
