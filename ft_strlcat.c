/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 01:59:44 by usantos-          #+#    #+#             */
/*   Updated: 2021/06/05 12:00:03 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	length;
	size_t	index;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	length = ft_strlen(dst);
	index = 0;
	while (src[index] != '\0' && length + 1 < dstsize)
	{
		dst[length] = src[index];
		length++;
		index++;
	}
	dst[length] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[index]));
}
