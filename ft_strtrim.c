/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:06:03 by maareval          #+#    #+#             */
/*   Updated: 2022/05/01 12:28:01 by maareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	i = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[i]) && i != 0)
		i--;
	return (ft_substr((char *)s1, 0, i + 1));
}
