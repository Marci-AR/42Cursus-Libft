/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:08:05 by maareval          #+#    #+#             */
/*   Updated: 2022/05/13 09:30:33 by maareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*c;

	if (!s || !f)
		return (NULL);
	c = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!c)
		return (NULL);
	i = 0;
	while (i < (ft_strlen((char *)s)))
	{
		c[i] = f(i, s[i]);
		i++;
	}
	c[i] = '\0';
	return (c);
}
