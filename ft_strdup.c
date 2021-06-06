/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 21:42:01 by usantos-          #+#    #+#             */
/*   Updated: 2021/06/05 21:44:35 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = ft_calloc(sizeof(str), ft_strlen(s1) + 1);
	if (!str)
		return (0);
	ft_memcpy(str, s1, ft_strlen(s1) + 1);
	return (str);
}
