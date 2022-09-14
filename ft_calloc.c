/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:45:38 by maareval          #+#    #+#             */
/*   Updated: 2022/05/01 08:32:48 by maareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*buffer;

	buffer = (void *)malloc(size * n);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, size * n);
	return (buffer);
}
