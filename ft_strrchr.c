/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:33:03 by maareval          #+#    #+#             */
/*   Updated: 2022/04/25 20:03:41 by maareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			ptr = (char *)str + i;
		i++;
	}
	if (str[i] == c)
		ptr = (char *)str + 1;
	return (ptr);
}*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
