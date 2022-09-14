/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:49:41 by maareval          #+#    #+#             */
/*   Updated: 2022/04/20 13:00:03 by maareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main ()
{
	char c = '$';
	printf("%d", ft_isalnum(c));
	return (0);
}*/