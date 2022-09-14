/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:01:22 by maareval          #+#    #+#             */
/*   Updated: 2022/05/05 19:00:30 by maareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		iptr;
	char	*ptr;
	int		len;

	i = 0;
	iptr = 0;
	if (!s1)
		return (NULL);
	len = (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	ptr = malloc (sizeof(char) + len);
	if (!s1 || !s2 || !ptr)
		return (NULL);
	while (s1[i])
		ptr[iptr++] = s1[i++];
	i = 0;
	while (s2[i])
		ptr[iptr++] = s2[i++];
	ptr[iptr] = '\0';
	return (ptr);
}
