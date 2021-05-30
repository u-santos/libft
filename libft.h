/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usantos- <usantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 19:42:29 by usantos-          #+#    #+#             */
/*   Updated: 2021/05/29 13:11:07 by usantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>

int ft_atoi(const char *str);

size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);


int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isdigit(int c);

int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
